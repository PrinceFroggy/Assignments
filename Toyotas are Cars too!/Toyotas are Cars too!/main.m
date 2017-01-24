//
//  main.m
//  Toyotas are Cars too!
//
//  Created by Andrew Solesa on 2017-01-24.
//  Copyright © 2017 KSG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Car.h"
#import "Toyota.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        Car *Nissan = [[Car alloc] initWithModel:@"Rogue"];
        [Nissan drive];
        
        void drive();
        
        Toyota *toyota = [[Toyota alloc] init];
        [toyota drive];
        
        void drive();
        
    }
    return 0;
}
