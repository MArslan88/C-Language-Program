#include <stdio.h>


int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        printf("\n Alphabet");
    }else {
        printf("\n Not an alphabet");
    }
    


    return 0;
}


