#include<stdio.h>
void main()
{
char a='A';

while(a<='Z')
{
    printf("%2c-%c ",a,a+32);
    a++;
    
}
}