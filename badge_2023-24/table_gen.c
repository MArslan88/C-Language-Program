#include <stdio.h>

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

   int TBNO = 7;
   int ans;

   for(int a=1; a <= 10; a++){
    ans = TBNO*a;
    printf("%d x %d = %d\n",TBNO, a, ans);
   }




    return 0;
}