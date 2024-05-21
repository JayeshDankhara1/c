
#include<stdio.h>
void main()
{
int i=1,t=1;
do
{       
        printf("%8d",t*i);
        t+=t;
        i++;
  
}
while(i<=10);

}