#include <stdio.h>
#include "SDL.h"
#include "Engine.h"

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