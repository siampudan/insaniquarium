// graphic.h
#ifndef APP_H
#define APP_H

#include <SDL2/SDL.h>
#include "../../src/Animal/animal.h"


class App {
    public:
        SDL_Renderer *renderer;
        SDL_Window *window;
        App();
        void initWindow();
        void doInput();
        void prepareScene(char *bgFileName);
        void presentScene();
        SDL_Texture *loadTexture(char*  fileName);
        SDL_Surface *loadSurface(char* fileName);
        void drawBackground(char* background, int x, int y);
        void blit(Animal *animal);
};


#endif // !GRAPHIC_H
