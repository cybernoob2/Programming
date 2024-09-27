#include<stdio.h>

void file()
{
    FILE *fp;

    fp=fopen("‪to_do_list.txt","r");

    if(fp == NULL)
    {
        printf("Error in opening the file");
    }

    //fprintf(fp,"Hello world");

    char buffer[100];
    while(fgets(buffer, sizof (buffer), fp!)=NULL)
    {
        printf("%s", buffer);
    }

    fclose(fp);
}

int main(){

   file();

  return 0;
}
