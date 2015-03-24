//
//  MMStick.h
//  physics-2D-Verlet
//
//  Created by Adam Wulf on 3/23/15.
//  Copyright (c) 2015 Milestone made. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MMPoint.h"


@interface MMStick : NSObject

@property (readonly) MMPoint* p0;
@property (readonly) MMPoint* p1;
@property (readonly) CGFloat length;

-(id) initWithP0:(MMPoint*)_p0 andP1:(MMPoint*)_p1;

+(MMStick*) stickWithP0:(MMPoint*)p0 andP1:(MMPoint*)p1;

-(void) render;


@end