#include <stdio.h>

int main() {
    /*
    a--1
    num --2

    a 2
    num 4

    a 3
    num 12

    a 4
    num 48


    */

    int num = 2;

    for(int a=1; a<5; a++){
        num = num * a;
    }
    printf("the value of num is : %d",num);


    // for(int a=1; a<=10; a++){
    //     // statements
    //     // printf("%d ",a);
    //     printf("%d Potato\n",a);
    // }



        return 0;
}