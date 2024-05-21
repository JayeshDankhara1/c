#include<stdio.h>
void Revas(int num);

void main()
{
    Revas(-234);
}

void Revas(int num)
{   int re=0,n=num;
    while(num!=0)
    {
        re=re*10+num%10;
        num/=10;
    }
    printf("%d Is Revas %d",n,re);
}