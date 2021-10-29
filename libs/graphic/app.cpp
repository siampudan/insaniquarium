#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "app.h"
#include <iostream>

const int SCREEN_WIDTH = 1080;
const int SCREEN_HEIGHT = 720;

App::App(){};

void App::initWindow(){
    int rendererFlags, windowFlags;
    IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);    

    rendererFlags = SDL_RENDERER_ACCELERATED;

    windowFlags = 0;

    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        std::cout << "Couldn't initialize SDL: " << SDL_GetError() << std::endl;
        exit(0);
    }

    this->window = SDL_CreateWindow("Insaniqurium", SDL_WINDOWPOS_UNDEFINED,
    SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, windowFlags );

    if (!this->window){
        std::cout << "Failed to open window: " << SDL_GetError() << std::endl; 
        exit(0);
    }

    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

    this->renderer = SDL_CreateRenderer(this->window, -1, rendererFlags);

    if (!this->renderer){
        std::cout << "Failed to create renderer: " << SDL_GetError() << std::endl;
        exit(0);
    }

};

void App::doInput(){
    SDL_Event event;

    while(SDL_PollEvent(&event)){
        switch (event.type)
        {
        case SDL_QUIT:
            exit(0);
            break;
        default:
            break;
        }
    }
};

void App::prepareScene(char* backgroundFileName) {
    this->drawBackground(backgroundFileName,0,0);    
};


void App::presentScene(){
    SDL_RenderPresent(this->renderer);
};

SDL_Texture *App::loadTexture(char* fileName){
    SDL_Texture *texture;
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION,SDL_LOG_PRIORITY_INFO, "Loading %s", fileName);
    texture = IMG_LoadTexture(this->renderer, fileName);
    return texture;
}

SDL_Surface *App::loadSurface(char* fileName){
    SDL_Surface *surface;
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION,SDL_LOG_PRIORITY_INFO, "Loading %s", fileName);
    surface = IMG_Load(fileName);
    return surface;
}

void App::drawBackground(char* bgFileName, int x, int y){
    SDL_Texture *texture = loadTexture(bgFileName);
    SDL_Rect dest;

    for (x = 0; x < SCREEN_WIDTH ; x += SCREEN_WIDTH){
        dest.x = x;
        dest.y = y;
        dest.w = SCREEN_WIDTH;
        dest.h = SCREEN_HEIGHT;
        SDL_RenderCopy(this->renderer, texture, NULL, &dest);
    }
}

void App::blit(Animal *animal){
    SDL_Rect dest;

    dest.x = animal->getLocation().getX();
    dest.y = animal->getLocation().getY();
    dest.w = SCREEN_WIDTH;
    dest.h = SCREEN_HEIGHT;
    
    SDL_Texture *texture = loadTexture("../assets/Animal/PiranhaNormal/piranha.png");
    SDL_QueryTexture(texture, NULL, NULL, &dest.w, &dest.h);
    SDL_RenderCopy(this->renderer, texture, NULL, &dest);
    
}


