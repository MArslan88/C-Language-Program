#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    char name[60];
    int no;

    fp = fopen("bio.txt","r+");

    printf("\tEmp ID    Emp Name\n");
    printf("\t********************\n");

    while (!feof(fp)){
        /* code */
        fscanf(fp,"%s %d", name, &no);

        printf("\t%d \t\t%s\n",no, name);
    }
    fclose(fp);
    

    return 0;
}


