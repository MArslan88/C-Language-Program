#include <stdio.h>
#include <math.h>


int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d",&year);

    if(year%4 == 0){
        printf("\n Its a leap year.");
    }else{
        printf("\n Its a non-leap year.");
    }

    return 0;
}


