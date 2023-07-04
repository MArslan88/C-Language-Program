#include <stdio.h>
#include <stdlib.h>

int main() {

    int val1;
    int val2;

    printf("Enter value 1: ");
    scanf("%d",&val1);


    printf("\nEnter value 2: ");
    scanf("%d",&val2);

    int sum = val1 + val2;

    printf("\nThe sum is %d",sum);


    return 0;
}