#include<stdio.h>
void main()
{
int i=1,n;
printf("enter your number:-");
scanf("%d",&n);
while(n>=i)
{
    printf("%3d",n--);
}
}