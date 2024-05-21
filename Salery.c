#include<stdio.h>
void main()
{
    int s;
    printf("enter The Basic Salery :- ");
    scanf("%d",&s);
    float h,d,to;
    if(s<5000)
    {
        h=8,d=20;
    }
    else if(s<=10000)
    {
        h=12,d=30;
    }
    else if(s<=15000)
    {
        h=15,d=40;
    }
    else
    {
        h=20,d=50;
    }
    to=((s*h)/100)+((s*d)/100)+s;
    
    printf("\n|%7s|%7s|%7s|%7s|","Basic","HRA","Da","Salery");
    printf("\n|%7s|%5.0f %%|%5.0f %%|%7s|"," ",h,d," ");
    printf("\n---------------------------------");
    printf("\n|%7d|%7.2f|%7.2f|%7.2f|",s,(s*h)/100,(s*d)/100,to);
}