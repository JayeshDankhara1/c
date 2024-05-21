#include<stdio.h>
#include<string.h>


    void main()
    {
    int i=0,j=0;
    printf("Enter Your Name:-");
    char name[50];
    gets(name);
//    fgets(name, sizeof(name), stdin);
    
    
    printf("Enter Your Name:-");
    char name1[50];
    gets(name1);
//    fgets(name1, sizeof(name1), stdin);
    
    
    for(j=0 ; name[j]!='\0';j++);
    
    for(i=0 ; name1[i]!='\0';i++,j++)
    {
        name[j]=name1[i];
    }
    
    puts(name);
    }
    
