//
//  main.c
//  FizzBuzz
//
//  Created by Andrew Solesa on 2016-12-31.
//  Copyright © 2016 KSG. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 100; i++)
    {
        if ((i % 3) && (i % 5))
        {
            printf("Number: %d", i);
        }
        
        if (i % 3 == 0)
        {
            printf("Fizz");
        }
        
        if (i % 5 == 0)
        {
            printf("Buzz");
        }
        
        printf("\n");
    }
}
