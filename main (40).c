
#include<stdio.h>
void main()
{
int i=1,j=1;
char a='A';
do
{       if(j%2!=0)
        {
        printf("%2c",a);
        a+=2;
        i+=2;
        j++;
        }
        else
        {printf("%2c",a+32);
        a+=2;
        i+=2;
        j++;
            
        }
  
}
while(i<=10);

}