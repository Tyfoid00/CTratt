//
//  Engine.c
//  CTratt2
//
//  Created by Oscar Wiberg on 11/06/14.
//  Copyright (c) 2014 Oscar Wiberg. All rights reserved.
//

#include <stdio.h>
#include "Engine.h"

float deltaTime;
Vec3 camera;

const int maxObjects=100;
struct GameObjects {
    
    Vec3 coords[maxObjects];
    int image[maxObjects];
    
    
};