//
//  main.c
//  Two Doors
//
//  Created by Andrew Solesa on 2016-12-31.
//  Copyright © 2016 KSG. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    int choice;
    
    do
    {
        printf("Welcome to Two doors.\n");
    
        printf("Would you like to play? (y/n): ");
    
        scanf("%c", &play);
    
        if (play == 'y')
        {
            printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n\n");
        
            printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n\n");
        
            printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n\n");
        
            printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n\n");
        
            printf("What do you ask so you can pick the door to freedom?\n\n");
    
            printf("\t1.Ask the truth-guard to point to the door of doom.\n\n");
            printf("\t2.Ask the liar-guard to point to the door of doom.\n\n");
            printf("\t3.Doesn't matter which one you pick.\n\n");
        
            printf("Enter your choice: ");
        
            scanf("%d", &choice);
        
            char *answer = "\n No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n\n";
        
            switch (choice)
            {
                case 1:
                    printf("%s", answer);
                break;
                
                case 2:
                    printf("%s", answer);
                break;
            
                case 3:
                    printf("%s", answer);
                break;
            
                default:
                break;
            }
            
            scanf("%c", &play);
        }
        else
        {
            break;
        }
    }
    while (play != 'n');
    
    return 1;
}
