#include <stdio.h>

int main()
{

    // int val_1 = 2;
    // int val_2 = 2;

    /*
    if(condition){
        if condition is true
        statements...
    } else{
        if condition is false
        statemnts...
    }
    */

    // if(val_1 == val_2){
    //     printf("Both values are equal\n");
    // }else{
    //     printf("Both values are not equal\n");
    // }

    // if(val_1 > val_2){
    //     printf("Value-1 is greater than value-2. \n");
    // }else if(val_2 > val_1){
    //     printf("Value-2 is greater than value-1. \n");

    // }

    // double percentage = 59;

    // if(percentage >= 80){
    //     printf("A-1 Grade");
    // }else if (percentage >= 70){
    //     printf("A Grade");
    // }else if(percentage >= 60){
    //     printf("B Grade");
    // }else{
    //     printf("Fail");
    // }

    int number = 46;
    int remainder = number % 2;

    if (remainder == 0)
    {
        printf("The given number is Even.");
    }
    else
    {
        printf("The given number is Odd.");
    }

    return 0;
}