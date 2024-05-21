#include<stdio.h>


void main()
{
for(int i=1 ;i<=100000;i++)
{int a=i,b=i,c=0,sum1=0;
    while(a!=0)
    {
        a=a/10;
        c++;
       
    }
    for(int j=1 ; j<=c; j++)
    {int sum=1;
        for(int l=1; l<=c; l++)
        {
            sum*=b%10;
        }
        b=b/10;
        sum1+=sum;
        
    }
    if(sum1==i)
    {
        printf("%d ",i);
    }
}
}