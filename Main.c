#include <stdio.h>
#include "SDL.h"



SDL_Window* window;
SDL_Renderer* renderer;
SDL_DisplayMode displayMode;
long lastTime =0;

void initSDL(){
    if(SDL_Init(SDL_INIT_EVERYTHING) ==-1){
        perror(SDL_GetError());
    }
    
    SDL_GetDesktopDisplayMode(0, &displayMode);
    
    window = NULL;
    window=SDL_CreateWindow("CTratt", 0, 0, displayMode.w, displayMode.h, SDL_WINDOW_RESIZABLE);
    if(!window){
        perror(SDL_GetError());
    }
    
    renderer = NULL;
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if(!renderer) {
        perror(SDL_GetError());
    }
    //SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    lastTime= SDL_GetTicks();
}


void destroySDL() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}


void gameLoop(){
    SDL_Event e;
    int running =1;
    
    while(running){
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                running=0;
            }
        }
        // do updates
        // draw
        
        
    }
}




int main(int argc, char** argv){
    initSDL();
    gameLoop();
    destroySDL();
    return 0;
}