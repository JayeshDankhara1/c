#include<stdio.h>
void main()
{
int i=1,t=0;
do
{
    printf("%3d",i);
    t+=i;
    i++;
    
}
while(i<=10);
{
    printf("\n total:-%d",t);
}

}