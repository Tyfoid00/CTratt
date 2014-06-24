//
//  Engine.c
//  CTratt2
//
//  Created by Oscar Wiberg on 11/06/14.
//  Copyright (c) 2014 Oscar Wiberg. All rights reserved.
//

#include <stdio.h>
#include<string.h>
#include "Engine.h"
#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"


SDL_Window* window;
SDL_Renderer* renderer;
SDL_DisplayMode displayMode;

float deltaTime;
float lastTime =0;
Vec3 camera;


//const int maxObjects=100;
#define MAX_OBJECTS 100
struct GameObjects {
    
    Vec3 coords[MAX_OBJECTS];
    int image[MAX_OBJECTS];
    
    
};

void draw(Vec3 coords, SDL_Texture* texture){
    // draw texture at coords
}

/*
void drawRect( *pos){
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawRect(renderer, &rect);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
}*/

void drawTexture(SDL_Rect rect  ,SDL_Texture *texture){
    int w,h;
    SDL_QueryTexture(texture, NULL, NULL, &w, &h);
    SDL_RenderCopyEx(renderer, texture, NULL, &rect, 0, NULL, SDL_FLIP_NONE);
}

void updateDelta(){
    unsigned int delta, now;
    now = SDL_GetTicks();
    delta=now - lastTime;
    lastTime=now;
    deltaTime = delta /1000.0f;
}


SDL_Texture* createTexture(const char* path) {
    SDL_Texture * texture = NULL;
    
    SDL_Surface* image = IMG_Load(path);
    texture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_FreeSurface(image);
    
    if(!texture){
        char errorMessage[80];
        strcpy(errorMessage, "Could not load image ");
        strcpy(errorMessage, path);
        perror(errorMessage);
    }
    
    return texture;
}





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
