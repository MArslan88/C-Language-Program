#include <stdio.h>
#include <stdlib.h>

// function with parameters

// 1-function declaration
int add(int num1, int num2);

int main()
{
    // 3-function call
    int sum = add(40,2);
    printf("Result : %d",sum);

    return 0;
}

// 2- function definition
int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}
