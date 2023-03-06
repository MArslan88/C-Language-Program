#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    char name[60], opt;
    int no;

    fp = fopen("bio.txt","a+");
    cont:
    printf("\nEnter the Employee No :");
    scanf("%d",&no);

    printf("\nEnter the Emplayee Name :");
    scanf("%s",name);

    fprintf(fp, "\n\n %s\n%d",name,no);
    printf("\n press 1 to continue..");
    scanf("%d",&opt);
    if(opt == 1)
    goto cont;

    fclose(fp);


    return 0;
}

