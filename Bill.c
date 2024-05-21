#include<stdio.h>
void main()
{
    int u,m=50;
    float to,a=0,n;
    printf("enter The Unit :- ");
    scanf("%d",&u);
    float p;
    if(u<=100)
    {
        p=0.60;
    }
    else if(u<=200)
    {
        p=0.80;
    }
    else
    {
        p=0.90;
    }
    to=m+((p*u));
    if(to>=300)
    {
     a=0.15;
    }
    n=to+(to*a);
    printf("\n--------------------------------------------");
    printf("\n|%6s|%8s|%8s|%8s|%8s|","Total","Charge","Fix", "A Charge","Net");
    printf("\n|%6s|%6.2f P|%8s|%6.2f P|%8s|","Unit",p,"Charge",a,"Amount");
    printf("\n--------------------------------------------");
    printf("\n|%6d|%8.2f|%8d|%8.2f|%8.2f|",u,(u*p),m,(a*to),n);
    printf("\n--------------------------------------------");
    
}