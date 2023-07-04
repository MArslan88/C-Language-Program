#include <stdio.h>
#include <stdlib.h>
    // If-else Statement
int main() {

    /*
    2 x 1 = 2
    2 x 2 = 4
    2 x 3 = 6
    2 x 4 = 8
    2 x 5 = 10
    2 x 6 = 12
    2 x 7 = 14
    2 x 8 = 16
    2 x 9 = 18
    2 x 10 = 20
    */

    int tbno, ans;
    printf("Enter any number: ");
    scanf("%d\n",&tbno);

    for(int i=1; i<=10; i++){
        ans = tbno*i;
        printf("%d x %d = %d\n",tbno,i,ans);
    }






        return 0;
}