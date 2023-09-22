#include <stdio.h>

int main()
{
    
    int val_1 = 2;
    int val_2 = 6;

    /*
    if(condition){
        statements...
    }
    */

    if(val_1 == val_2){
        printf("Both values are equal\n");
    }

    if(val_1 != val_2){
        printf("Both values are not equal.\n");
    }

    if(val_1 > val_2){
        printf("Value-1 is greater than value-2.\n");
    }

    if(val_1 < val_2){
        printf("Value-1 is less than value-2.\n");
    }

    if(val_1 >= val_2){
        printf("Value-1 is greater than or equal to value-2. \n");
    }


    if(val_1 <= val_2){
        printf("Value-1 is less than or equal to value-2. \n");
    }

    

    printf("Program end");

     

    return 0;
}