#include<stdio.h>
#include<string.h>


    void main()
    {
    int i;
    printf("Enter Your Name:-");
    char name[50];
    //gets(name);
    fgets(name, sizeof(name), stdin);
    for(i=0 ; name[i]!='\0';i++);
    printf("%d",i);
    

    
    
    }
