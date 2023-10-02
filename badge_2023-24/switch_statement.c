#include <stdio.h>

int main()
{

    int a;
    printf("Enter a number from 1 to 5: ");
    scanf("%d",&a);

    // if(a==1){
    //     printf("You have entered One");
    // }else if(a==2){
    //     printf("You have entered Two");
    // }else if(a==3){
    //     printf("You have entered Three");
    // }else if(a==4){
    //     printf("You have entered Four");
    // }else if(a==5){
    //     printf("You have entered Five");
    // }

    switch(a){
        case 1:
        printf("You have entered One");
        break;

        case 2:
        printf("You have entered Two");
        break;

        case 3:
        printf("You have entered Three");
        break;

        case 4:
        printf("You have entered Four");
        break;

        case 5:
        printf("You have entered Five");
        break;

        default:
        printf("You have entered wrong number...!");
        break;


    }



    return 0;
}