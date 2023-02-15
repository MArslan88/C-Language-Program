#include <stdio.h>
#include <stdlib.h>

int main()
{
    // pow(3,4) pre-defined function
    // float ans = pow(3,5);
    // printf("%f",ans);

    int a = 3;

    for(int b=1; b<5 ; b++){
        a = a*3;
    }
    printf("%d",a);

    return 0;
}