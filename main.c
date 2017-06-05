//
//  main.c
//  Assignment 2
//
//  Created by Vinh Luu on 2017-06-04.
//  Copyright © 2017 Vinh Luu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    int choice;
    
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    scanf("%c", &play);
    
    if (play == 'y') {
        
        printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
        printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
        printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
        printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
        printf("What do you ask so you can pick the door to freedom?\n\n");
        printf("\t1.Ask the truth-guard to point to the door of doom.\n");
        printf("\t2.Ask the liar-guard to point to the door of doom.\n");
        printf("\t3.Doesn't matter which one you pick.\n");
        scanf("%d", &choice); /* still getting a yellow error but I changed this to %d because you're inputting a number in there. Allows you the option to input a number vs if it's %c it'll not run properly ----- ended up figuring this out. we defined choice as a char earlier but needs to be identified as an int since it's a number that's chosen! */
        
        /* I removed the char answer line entirely and just added the answers within each case so that regardless of which answer is chosen, you'd get the "no matter which one you choose" answer.  Maybe there's a way to do it with the char answer line but the way I did it makes most sense to me */
        
        switch (choice) {
            case 1: printf("No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n");
                break;
            case 2:printf("No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n");
                break;
            case 3: printf("No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n");
                break;
            
        }
        
        /* attempting the stretch goal but I can't seem to get the program to loop over again. seems like it's the break in the cases above that cause the program to end entirely. Originally tried to do it without a loop and copy and pasted the above code thinking it'd go through it all again but it doesn't.  The do loop now doesn't want to run either...*/
        
        do{
        
        printf("Do you want to play again? (y/n): ");
        scanf("%c" , &play);
    
        }while (play == 'y');
        
        }
    
return 0;

}







    
