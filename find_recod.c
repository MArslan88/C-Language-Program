#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    char name[60];
    int no,n;

    fp = fopen("bio.txt","r+");

    printf("Enter Emp no to search ");
    scanf("%d",&n);

    printf("\n\tEmp ID \t\tEmp Name\n");
    printf("***************************\n");

    while(feof(fp)){
        fscanf(fp,"%s %d",name,&no);
        if(n==no){
            printf("\t%d \t\t %s\n",no, name);
        }
        fclose(fp);
    }
    

    return 0;
}


