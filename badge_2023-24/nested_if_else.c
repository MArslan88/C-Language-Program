#include <stdio.h>

int main()
{
    int age = 14;
    int cnic = 1;

    if(age >= 18){
        if(cnic == 1){
            printf("You can cast a vote.");
        }else{
            printf("Please visit Nadra office.");
        }
    }else{
        printf("Your age is not eligible.");
    }


    return 0;
}