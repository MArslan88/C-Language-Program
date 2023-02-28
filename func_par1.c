#include <stdio.h>
#include <stdlib.h>

// 1-function declaration
void sum(int a, int b);

int main()
{
    int a, b;
    printf("Enter first value: ");
    scanf("%d",&a);
    printf("\nEnter second value: ");
    scanf("%d",&b);

    // 3-function call
    sum(a,b);

    return 0;
}

// 2- function definition
void sum(int a, int b){
    int c = a + b;
    printf("The sum is : %d",c);
}
