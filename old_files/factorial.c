#include <stdio.h>
#include <stdlib.h>
    // If-else Statement
int main() {
    int num;
    int fact = 1;

    printf("Enter positive integer: ");
    scanf("%d",&num);

    for(int a=1; a<=num; a++){
        fact = fact*a;
    }
    printf("Factorial is : %d",fact);




        return 0;
}