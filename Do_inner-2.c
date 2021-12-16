#include <stdio.h>

/* declare function*/
int inner_product (int a[], int b[], int n);
int inner_product_reverse (int a[], int b[], int n);


int main ()
{
/* declare variable n is the number of element in array
    i, j are the index of array
    innerOutput and innerOutputReverse are the variable to store the value of output */    
  int n;
  int i, j;
  int innerOutput;
  int innerOutputReverse;

// get the user input for element in array
  printf ("Please enter your array number: ");
  scanf ("%d", &n);

// declare the array a and b with n element
  int a[n];
  int b[n];

// get the input for array a 
  printf ("Enter the first array of size %d:  ",n);
  for (i = 0; i < n; i++)
      scanf ("%d", &a[i]);
  
 // get the input for array b 
  printf("Enter the second array of size %d: ",n);    
  for(j =0; j < n; j++)
        scanf("%d", &b[j]);

 // call function to get the total of function    
  innerOutput = inner_product(a,b,n);
  innerOutputReverse = inner_product_reverse(a,b,n);
  
  // print out the output of function with input user enter
  printf("Inner product is: %d \n", innerOutput);
  printf("Inner product reverse is: %d ", innerOutputReverse);
  
  
  return 0;
}

// create function to get total of a[i]* b[i]
int inner_product (int a[], int b[], int n)
{
    int i;
    int sum = 0;
    for(i =0; i<n; i++)
    {
        sum += a[i] * b[i];
    }
    return sum;
}

// create function to get total of a[i] * b[n-i-1]
int inner_product_reverse (int a[], int b[], int n)
{
    int i;
    int sum = 0;
    for(i =0; i<n; i++)
    {
        sum += a[i]*b[n-i-1];
    }
    return sum;
}
    


