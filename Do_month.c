#include <stdio.h>

// this program to compare which dates come first on calender
int main()
{
    
   // declare variable for date 1 and date 2
   int month1, day1, year1;
   int month2, day2, year2;
    
    // get the user's input for 2 dates

      printf("Enter date 1 (mm/dd/yy): ");
      scanf("%d/%d/%d", &month1, &day1, &year1);
     
      printf("Enter date 2 (mm/dd/yy): ");
      scanf("%d/%d/%d", &month2, &day2, &year2);
     

   // while user do not enter date 0/0/0 , the loop will compare the dates
    while (month1 != 0 && day1!= 0 && year1 !=0)
   
        {   // compare the year first
               
            if(year1 < year2)
            {
                printf("The date 1 comes first on calendar");
            }
            else if (year1 > year2)
            {
                printf("The date 2 comes first on calendar");
            }
            else
            {   // if the year equal, compare the month
                //  printf("equal year\n");
               
                 if(month1 < month2)
                    {
                        printf("The date 1 comes first on calendar");
                    }
                 else if (month1 > month2)
                    {
                        printf("The date 2 comes first on calendar");
                    }
                 else
                    {      // if the month equal, compare the day
                            //  printf("equal month\n");
                       
                                    if(day1 < day2)
                                            {
                                                printf("The date 1 comes first on calendar");
                                            }
                                     else if (day1 > day2)
                                            {
                                                printf("The date 2 comes first on calendar");
                                            }
                                     else
                                            {
                                                printf("equal day");
                                            }
                       
                    }
               
             }
                // get the input from user again, if user enter 0/0/0, use the break to stop loop to end program
                printf("\nEnter date 1 (mm/dd/yy): ");
                scanf("%d/%d/%d", &month1, &day1, &year1);
                    if(month1 == 0 && day1 == 0 && year1 == 0)
                        {break;}
                printf("Enter date 2 (mm/dd/yy): ");
                scanf("%d/%d/%d", &month2, &day2, &year2);
           
        }
   
    return 0;
}

