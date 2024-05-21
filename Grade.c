#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,t;
    float p;
    
    printf("enter The 1'st Subject Mark :- ");
    scanf("%d",&m1);
    printf("enter The 2'nd Subject Mark :- ");
    scanf("%d",&m2);
    printf("enter The 3'rd Subject Mark :- ");
    scanf("%d",&m3);
    printf("enter The 4'th Subject Mark :- ");
    scanf("%d",&m4);
    t=m1+m2+m3+m4;
    p=t/4;
    printf("\nTotal Mark's :-%d",t);
    printf("\nPercentage :- %.2f %%\n",p);
    if(p>=75)//75 up a
    { printf("Grade :- A");}
    else if(p>=60)// 60 to 74 b
    { printf("Grade :- B");}
    else if(p>=45)// 45 to 59 c
    { printf("Grade :- C");}
    else if (p>=35)// 35 to 44 d
    { printf("Grade :- D");}
    else// belove 35 fail
    { printf("Grade :- Fail");}
    
    
    
}