//
//  Largest.m
//  Largest Number
//
//  Created by Andrew Solesa on 2017-01-24.
//  Copyright © 2017 KSG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Largest.h"

@implementation Largest

- (int) Highest:(NSArray *)array
{
    int highest = [[array valueForKeyPath: @"@max.self"] intValue];
    
    return highest;
}

@end
