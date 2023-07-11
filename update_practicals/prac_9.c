#include <stdio.h>


int main()
{
    // Write a program, which uses a switch and break statement.
    int val1, val2;
    char op;

    printf("\nEnter an operator: ");
    op = getchar();

    printf("\nEnter 1st number: ");
    scanf("%d",&val1);

    printf("\nEnter 2nd number: ");
    scanf("%d",&val2);


    switch(op){
        case '+':
        printf("\n%d %c %d = %d",val1,op,val2,val1+val2);
        break;

        case '-':
        printf("\n%d %c %d = %d",val1,op,val2,val1-val2);
        break;

        case '*':
        printf("\n%d %c %d = %d",val1,op,val2,val1*val2);
        break;

        case '/':
        printf("\n%d %c %d = %d",val1,op,val2,val1/val2);
        break;

        default:
        printf("\nInvalid operator!");
    }



    return 0;
}


