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
    
    
    
    for(i=0 ; name1[i]!='\0';i++);
    
    
    char fname[(i+j)];
    //printf("%ld",sizeof(fname));
    //printf("\n");
    
     for(int o=0;o<=((i+j)-2);o++)
    {
       if(o<(j)){
        fname[o]=name[o];   
       }else
       {
        fname[o]=name1[o-j];
       }
        
    }
    
    
    puts(fname);
    
     
    }
