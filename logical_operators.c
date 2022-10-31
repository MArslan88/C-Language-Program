#include <stdio.h>
#include <stdlib.h>
// Grade
int main() {
    /*
    Logical operators
    1- OR Operator      '||'
    2- AND Operator     '&&'
    3- NOT Operator     '!'

    1 = TRUE
    0 = FALSE
    ---OR----
    0 + 0 = 0
    0 + 1 = 1
    1 + 0 = 1
    1 + 1 = 1

     ---AND---
    0 * 0 = 0
    0 * 1 = 0
    1 * 0 = 0
    1 * 1 = 1

    ---NOT---
    0 = 1
    1 = 0


    */

   // OR Operator
    int value1=10;
    int age = 18;
    if(value1 ==1 || age ==18){
        printf("Condition is TRUE.");
    }else{
        printf("Condition is FALSE");
    }

    // AND Operator
    if(value1 ==1 && age ==18){
        printf("Condition is TRUE.");
    }else{
        printf("Condition is FALSE");
    }

    // NOT Operator
    if(age !=8){
       printf("Condition is TRUE.");
    }else{
        printf("Condition is FALSE");
    }


    return 0;
}