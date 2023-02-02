#include <stdio.h>
#include <stdlib.h>
    // switch Statement
int main() {
    int number;
    printf("Enter a number between 1 to 5: ");
    scanf("%d",&number);

    switch(number){
        case 1:
        printf("\nYou have choosed ONE.");
        break;

        case 2:
        printf("\nYou have choosed TWO.");

        case 3:
        printf("\nYou have choosed THREE.");
        break;

        case 4:
        printf("\nYou have choosed FOUR.");
        break;

        case 5:
        printf("\nYou have choosed FIVE.");
        break;

        default:
        printf("\nYou have choosed WRONG NUMBER.");
        break;
    }

        return 0;
}