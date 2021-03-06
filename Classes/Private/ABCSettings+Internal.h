//
// ABCSettings+Internal.h
//
// Created by Paul P on 2016/02/09.
// Copyright (c) 2016 Airbitz. All rights reserved.
//

#import "ABCSettings.h"
#import "ABCContext+Internal.h"

@interface ABCSettings (Internal)

@property (nonatomic, copy)     NSString                *strPIN;
@property (nonatomic)           bool                    bDisablePINLogin;


- (id)init:(ABCAccount *)user localSettings:(id)local keyChain:(id)keyChain;

@end
