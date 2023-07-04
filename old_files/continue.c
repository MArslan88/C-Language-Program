#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;
    int sum = 0;

    for(int i=1; i<=5; ++i){
        printf("Enter a number %d: ",i);
        scanf("%d",&number);

        // if user enters negative number, loop will terminate
        if(number<0){
            continue;
        }
        // sum = sum + number;
        sum += number;
    }
    printf("Sum = %d",sum);


    return 0;
}