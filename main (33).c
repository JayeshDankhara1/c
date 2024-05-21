#include<stdio.h>
void main()
{
int i=2,t=0;
do
{
    printf("%3d",i);
    t+=i;
    i+=2;
    
}
while(i<=10);
{
    printf("\n even total:-%d",t);
}

}