//
//  Engine.h
//  CTratt2
//
//  Created by Oscar Wiberg on 11/06/14.
//  Copyright (c) 2014 Oscar Wiberg. All rights reserved.
//

#ifndef CTratt2_Engine_h
#define CTratt2_Engine_h

typedef struct GameObject GameObject;

typedef struct {
    float x,y,z;
} Vec3;

extern float deltaTime;
extern Vec3 camera;

extern void initSDL();
extern void destroySDL();


#endif
