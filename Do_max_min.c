#include <stdio.h>
#define N 10

// declare and initialize the function void 
void max_min(int *a , int *max, int *min){
    // declare poiter p
    int *p;
    
    // assign data of first element in array to *max and *min
    *max = *a;
    *min = *a;
    
    // use for loop to run over the element of array and if statement to get min value and max value
    for (p = a; p < a + N; p++) { 
        if (*p > *max) {
        *max = *p;
        }
        
        else if (*p < *min) {
        *min= *p;
        }
    }
   
}

int main()
{
    // declare the variable i, array b with N value,big and small 
    int i, b[N], big, small;
    
    // ask the user enter the value in array
    printf("Enter %d number: ", N);
    
    // use for loop to get element in array
    for(i = 0; i < N ;i++){
        scanf("%d", &b[i]);
    }
    
    // call function max_min to get the value of max and min in array
    max_min(b, &big, &small);
    printf("The largest number: %d\n", big);
    printf("The smallest number: %d\n", small);
    

    return 0;
}

