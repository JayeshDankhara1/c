#include<stdio.h>

void p1(int num)
{   int k=1;
    for(int i=1; i<=num;i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%3d",k++);
        }
        printf("\n");
    }
    printf("\n");
}
void p2(int num)
{  
    for(int i=1; i<=num;i++)
    {
        int k=1;
        for(int j=1; j<=i; j++)
        {
            printf("%3d",k++);
        }
        printf("\n");
    }
    printf("\n");
}
void p3(int num)
{  
    for(int i=1; i<=num;i++)
    {
        int k=i;
        for(int j=1; j<=i; j++)
        {
            printf("%3d",k++);
        }
        printf("\n");
    }
    printf("\n");
}
void p4(int num)
{  
    for(int i=1; i<=num;i++)
    {
        int k=i;
        for(int j=1; j<=i; j++)
        {
            printf("%3d",k);
            k+=2;
        }
        printf("\n");
    }
    printf("\n");
}
void p5(int num)
{  
    for(int i=1; i<=num;i++)
    {
        int k=6-i;
        for(int j=1; j<=i; j++)
        {
            printf("%3d",k++);
        }
        printf("\n");
    }
    printf("\n");
}

void main()
{
    p1(5);
    p2(5);
    p3(5);
    p4(5);
    p5(5);

}