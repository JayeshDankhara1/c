
#include<stdio.h>
void main()
{
int i=1;
do
{
    if(i%2!=0)
    {
        printf("%4d",i);
    }
    else
    {
        printf("%4d",i*i);    
    }
   i++;
  
}
while(i<=10);

}