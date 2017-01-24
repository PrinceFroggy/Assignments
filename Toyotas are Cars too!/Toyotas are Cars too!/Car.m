//
//  Car.m
//  Toyotas are Cars too!
//
//  Created by Andrew Solesa on 2017-01-24.
//  Copyright © 2017 KSG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Car.h"

@implementation Car

- (void) drive;
{
    NSLog(@"You are driving a %@", self.model);
}

- (id) initWithModel: (NSString *)model
{
    _model = model;
    
    return self;
    
}

@end
