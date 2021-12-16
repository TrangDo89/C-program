//
//  main.c
//  practiceC
//this program is about changing Capital letter to the digital phone number  
//  Created by Trang Do on 1/15/21.

#include <stdio.h>
#include <string.h>


int main () {

  // declare variable

    char ch;
    
    // ask the user enter the phone number
    printf("please enter phone number: ");
    
    // use while loop and if/else to categories the number follow alphabet
    while((ch = getchar())!='\n')
    {
        if((ch =='A')||(ch == 'B')||(ch == 'C'))
        {
            printf("2");
        }

        else if((ch == 'D')||(ch == 'E')||(ch =='F'))
        {
            printf("3");
        }
        else if((ch == 'G')||(ch == 'H')||(ch =='I'))
        {
            printf("4");
        }
        else if((ch == 'J')||(ch == 'K')||(ch == 'L'))
        {
            printf("5");
        }
        else if((ch == 'M')||(ch == 'N')||(ch == 'O'))
        {
            printf("6");
        }
        else if((ch == 'P')||(ch == 'R')||(ch == 'S'))
        {
            printf("7");
        }
        else if((ch == 'T') || (ch == 'U')|| (ch == 'V') )
        {
            printf("8");
        }
        else if((ch == 'W') || (ch == 'X') || (ch == 'Y'))
        {
            printf("9");
        }

	/*  everything else will be keep the same like -,numbers
	 and some letter which is not mention */ 
        else
            putchar(ch);
    }
    // make one line after output
    printf("\n");



   return(0);
}





