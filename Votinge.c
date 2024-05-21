#include<stdio.h>
void main()
{
    int Age;
    printf("enter The Age :- ");
    scanf("%d",&Age);
    if(Age<18)
    {
        printf("Sorry,You Are Not Eligibale Voting!");
    }else
    {
        printf("Congratulation, You Are Eligibale Voting!");
    }
    
}