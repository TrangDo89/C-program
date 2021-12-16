#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// declare function encrypt
void encrypt(char *message, int shift){

// declare array a, character ch of string, i is index of string array
    char ch;
    char a[100];

    int i;
   
    // using for loop to run over the character in array
    for(i = 0; i < strlen(message);i++){
        ch = message[i];

    // using if else to print out the character encrypted
        if(ch >= 'A' && ch <= 'Z'){

            a[i] = (char)(((int)( ch - 'A' ) + shift) % 26 + 'A');
            printf("%c",a[i]);

        }

        else if(ch >= 'a' && ch <= 'z'){
           a[i] = (char)(((int)( ch - 'a' ) + shift) % 26 + 'a');
             printf("%c",a[i]);
        }

        else{
            a[i] = ch;
           printf("%c",a[i]);
        }
    }
}

int main()
{
   
 // declare string array str
  char str[100];
 
// declare the shift number
  int num;
 
  // prompt from user for message want to encrypt and the shift
  printf("Enter message to be encrypted: ");
  gets(str);

  printf("Enter shift amount (1 - 25): ");
  scanf("%d",&num);
 
  // print out encrypted message
  printf("Encrypted message: ");

  encrypt(str,num);
  printf("\n");

  // clear buffer and accept next string to get another message for decrypt
  getchar();
 
  // prompt from user for message want to decrypted
  printf("Enter message to be decrypted: ");
  gets(str);

  printf("Enter shift amount (1 - 25): ");
  scanf("%d",&num);
 
  // print out the decrypted message
  printf("decrypted message: ");

  encrypt(str,num);


    return 0;
}


