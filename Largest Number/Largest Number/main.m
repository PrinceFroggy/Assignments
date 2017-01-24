//
//  main.m
//  Largest Number
//
//  Created by Andrew Solesa on 2017-01-24.
//  Copyright © 2017 KSG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Largest.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
        NSArray *array = @[@1, @2, @3, @4, @1337, @5, @6];
        
        NSLog(@"The largest number in the array is: %d", [[Largest alloc] Highest:array]);
    }
    return 0;
}
