#include <stdio.h>
#include <stdlib.h>

// 1-function declaration
void sum(); 

int main()
{
    // 3-function call
    sum();

    return 0;
}

// 2- function definition
void sum(){
    int a=10;
    int b=20;
    int c=a+b;
    printf("The sum is : %d\n",c);
}