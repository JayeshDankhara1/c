
#include<stdio.h>
void main()
{
int i=1,t=0,t1=1,s;
do
{       
        printf("%8d",t);
        s=t+t1;
        t=t1;
        t1=s;
        i++;
  
}
while(i<=10);

}