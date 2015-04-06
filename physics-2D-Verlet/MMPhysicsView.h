//
//  MMPhysicsView.h
//  physics-2D-Verlet
//
//  Created by Adam Wulf on 3/22/15.
//  Copyright (c) 2015 Milestone made. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PhysicsViewDelegate.h"

@class MMPhysicsViewController;

@interface MMPhysicsView : UIView

@property (weak) MMPhysicsViewController* controller;
@property (weak) NSObject<PhysicsViewDelegate>* delegate;
@property (readonly) NSMutableArray* staticObjects;

@end
