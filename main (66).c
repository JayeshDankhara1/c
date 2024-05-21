#include<stdio.h>
#include<string.h>


void main()
{
    int i=0,j=0;
    
    printf("Enter Your Name:-");
    char name[50];
    char na[10];
    gets(name);
//    fgets(name, sizeof(name), stdin);
   for(i=0;name[i]!='\0';i++);
   j=(i-1)/2;
    for(int k=0;k<=j;k++)
    {
        na[0]=name[k];  //j
        name[k]=name[i-k-1];
        name[i-k-1]=na[0];
        
    }
    puts(name);
}
    
