#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1000

int main()
{
    // declare the file with pointer
    FILE *releases, *years, *pFile;

    // declare array char to contain string
    char str[MAX_LEN];
    char str1[MAX_LEN];
    char str2[MAX_LEN];
    int counter = 1;

    // open the file releases, years and new file to contain string from releases file and years file
    releases = fopen("Releases.txt", "r");
    years = fopen("Year.txt", "r");
    pFile = fopen("pFile.txt", "w");


    // if the files do not contain string, let user know error
    if(releases == NULL)
    {
        printf("Error opening file - Movie Data - Releases.txt\n");
        return 1;
    }

        if(years == NULL)
    {
        printf("Error opening file - Movie Data - Year.txt\n");
        return 1;
    }

          if(pFile == NULL)
    {
        printf("Error opening file - Movie Data - pFile.txt\n");
        return 1;
    }


    // use the while loop to get string from release and years to the new file
    while(fgets(str, MAX_LEN, years) != NULL)
    {

        str[4] = '\0';
        fputs(str, pFile);
        fputs(" :", pFile);
        fgets(str1, MAX_LEN, releases);
        fputs(str1, pFile);
        fputs("\n", pFile);
        counter++;

    }

    // close the new file before we open it again to read
     fclose(pFile);

     // open new file to read
     pFile = fopen("pFile.txt", "r");

     printf("Contents of the output file:\n");

    // use while loop to print out the string in new file
     while(fgets(str, MAX_LEN, pFile) != NULL)
     {
         printf("%s", str);

        counter++;
     }

    printf("\n\n");

    // close the files and print out the error for user if having problem closing files
    if(fclose(releases) == EOF)
    {
        printf("There were problems closing Releases.txt\n");
        return(1);
    }
    else{
        printf("Releases.txt has been successfully closed\n");
    }


     if(fclose(years) == EOF)
    {
        printf("There were problems closing Year.txt\n");
        return(1);
    }
    else{
        printf("Year.txt has been successfully closed\n");
    }


     if(fclose(pFile) == EOF)
    {
        printf("There were problems closing pFile.txt\n");
        return(1);
    }
    else{
        printf("pFile.txt has been successfully closed\n");
    }


    return 0;
}


