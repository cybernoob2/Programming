#include<stdio.h>

void filewrite(char note[1000])
{
    FILE *fp;

    fp=fopen("C:\\Users\\Victor\\Programming\\C\\to do  list.txt","a");

    if(fp == NULL)
    {
        printf("Error in opening the file");
    }

    fprintf(fp,"%s",note);

    fclose(fp);
}

void fileread()
{
    FILE *fp;

    fp=fopen("C:\\Users\\Victor\\Programming\\C\\to do  list.txt","r");

    if(fp == NULL)
    {
        printf("Error in opening the file");
    }

    char buffer[100];
    while(fgets(buffer, sizeof(buffer), fp)!=NULL)
    {
        printf("%s", buffer);
    }

}

int main(){

   
   //fileread();

   /*

   printf("\nYou have entered:\n%s",paragraph);*/

   char note[1000];
    char choice;
    printf("\t\t\t\t\t\t\t\tTHIS IS A TO DO LIST\t\t\t\t\t\t\t\t\n");

    do
    {
        for(int i=1;i <= 5;i++)
        {
            printf("%d.",i);
            fgets(note,sizeof(note),stdin);

            filewrite(note);
        }
            printf("Do you wish to continue writing some more(Y/N):");
            scanf("%c",&choice);
        
    } while (choice == 'Y'|| choice == 'y');
    
    



  return 0;
}
