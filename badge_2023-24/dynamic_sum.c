#include <stdio.h>

int main()
{
    /*
    Sum of two numbers
    1- initialized the variables (n1, n2, sum)
    2- Ask the user to enter values for n1 and n2
    3- calculate the sum
    4- print the result
    */

   // 1- initialization
   int n1, n2, sum;

   // 2- ask value for n1 and n2
   printf("Enter Number-1: ");
   scanf("%d",&n1);


   printf("Enter Number-2: ");
   scanf("%d",&n2);

   // 3- calculation
    sum = n1 + n2;

    // 4 - Result

    printf("The sum of %d and %d is %d",n1, n2, sum);
    // printf("The sum is : %d",sum);

   

     

    return 0;
}