#include <SDL2/SDL.h>
#include <iostream>



int main(int argc, char *argv[]){
    SDL_Window * window = nullptr;

    if (SDL_Init(SDL_INIT_VIDEO) < 0){
       std::cout << "Error init" << SDL_GetError() << std::endl;
    }else{
        window = SDL_CreateWindow("Windows Created", 
        SDL_WINDOWPOS_CENTERED, 
        SDL_WINDOWPOS_CENTERED, 
        1980, 1080,
        SDL_WINDOW_SHOWN);

        if (window = NULL){
            std::cout<<"Error creation"<<SDL_GetError()<<std::endl;
        }else{
            SDL_UpdateWindowSurface(window);
            SDL_Delay(3000);
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}