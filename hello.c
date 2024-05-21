#include<stdio.h>
void main()
{
  // FILE * data;
    char name[100];
     FILE * data = fopen("C:\\Users\\Dell\\Downloads\\file.txt","r");
    //gets(name);
   // fprintf(fopen("C:\\Users\\Dell\\Downloads\\file.txt","a"),"%s",name);
   while(fscanf(data,"%s",name)!=EOF)
    {
        printf("%s",name);
    }

}