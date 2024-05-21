#include<stdio.h>
void main()
{
    char a;
    printf("Enter The One cher :- ");
    scanf("%c",&a);
    if(a>=97 && a<=122)
    {
       a-=32;
    }
    else
    {
        a+=32;
    }
    printf("Output:- %c ",a);
}