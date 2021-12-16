#include <stdio.h>

// declare the structure date
struct date{
    int month;
    int day;
    int year;
};

// declare the function compare date
int compare_dates(struct date d1, struct date d2);

int main()
{
    // declare struct date d1 and d2
    struct date d1;
    struct date d2;
   
    // get user input for date 1 and date 2
      printf("Enter date 1 (mm/dd/yy): ");
      scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
     
      printf("Enter date 2 (mm/dd/yy): ");
      scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);
     
    // use while loop to keep asking user input until user enter 0/0/0  
       while (d1.month != 0 && d1.day!= 0 && d1.year !=0)
   
        {
            // declare the variable result to store the result from compare_dates function
              int result;
              result = compare_dates(d1,d2);
           
            // use if else to print the output base on the result from the function  
              if(result == -1){
                  printf("The date 1 comes first on calendar");
              }
             
              else if (result == 1){
                  printf("The date 2 comes first on calendar");
              }
              else {
                  printf("The date 1 and date 2 are the same date");
              }
             
          // get the input from user again, if user enter 0/0/0, use the break to stop loop to end program
                printf("\nEnter date 1 (mm/dd/yy): ");
                scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
                    if(d1.month == 0 && d1.day == 0 && d1.year == 0)
                        {break;}
                printf("Enter date 2 (mm/dd/yy): ");
                scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);
           
        }
   
    return 0;
}

// initialize the function and use if else to compare which date come first
int compare_dates(struct date d1, struct date d2){
      // compare the year first
               
            if(d1.year < d2.year)
            {
                return -1;
            }
            else if (d1.year > d2.year)
            {
                return 1;
            }
            else
            {   // if same year, compare month
               
                 if(d1.month < d2.month)
                    {
                        return -1;
                    }
                 else if (d1.month > d2.month)
                    {
                        return 1;
                    }
                 else
                    {      // if same year and month, compare date
                                    if(d1.day < d2.day)
                                            {
                                                 return -1;
                                            }
                                     else if (d1.day > d2.day)
                                            {
                                                return 1;
                                            }
                                     else
                                            {
                                                return 0;
                                            }
                       
                    }
               
             }
             
}


