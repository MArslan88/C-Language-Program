#include <stdio.h>
#include <stdlib.h>


int main()
{
    char gender;
    char name[20];
    int age;
    float height;

    printf ("\n Enter gender:");
    scanf ("%c",&gender);

    printf ("\nEnter name:");
    scanf ("%s",&name);

    printf ("\n Enter age:");
    scanf ("%d",&age);

    printf ("\nEnter height:");
    scanf ("%f",&height);

    printf ("\n I am %c",gender);
    printf ("\n My name is %s ",name);
    printf ("\n My age is %d",age);
    printf ("\n My height is %.1f",height);
    
    return(0);
}


