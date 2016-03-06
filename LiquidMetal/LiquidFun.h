//
//  LiquidFun.h
//  LiquidMetal
//
//  Created by Allen Tan on 12/9/14.
//  Copyright (c) 2014 White Widget Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef LiquidFun_Definitions
#define LiquidFun_Definitions

typedef struct Vector2D {
  float x;
  float y;
} Vector2D;

typedef struct Size2D {
  float width;
  float height;
} Size2D;

#endif

@interface LiquidFun : NSObject

+ (void)createWorldWithGravity:(Vector2D)gravity;
+ (void *)createParticleSystemWithRadius:(float)radius dampingStrength:(float)dampingStrength gravityScale:(float)gravityScale density:(float)density;
+ (void)createParticleBoxForSystem:(void *)particleSystem position:(Vector2D)position size:(Size2D)size;
+ (int)particleCountForSystem:(void *)particleSystem;
+ (void *)particlePositionsForSystem:(void *)particleSystem;
+ (void)worldStep:(CFTimeInterval)timeStep velocityIterations:(int)velocityIterations
positionIterations:(int)positionIterations;
+ (void *)createEdgeBoxWithOrigin:(Vector2D)origin size:(Size2D)size;
+ (void)setGravity:(Vector2D)gravity;
+ (void)setParticleLimitForSystem:(void *)particleSystem maxParticles:(int)maxParticles;

@end
