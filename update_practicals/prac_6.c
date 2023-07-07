#include <stdio.h>


int main()
{
    // Write a program that finds out the greatest number among three inputted numbers .
    int n1, n2, n3;

    printf("\nEnter 1st number: ");
    scanf("%d",&n1);
    printf("\nEnter 2nd number: ");
    scanf("%d",&n2);
    printf("\nEnter 3rd number: ");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3){
        printf("\n1st number is greatest!");
    }else if(n2>n1 && n2>n3){
        printf("\n2nd number is greatest!");
    }else{
        printf("\n3rd number is greatest!");
        }
    


    return 0;
}


