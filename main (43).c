#include<stdio.h>
void main()
{
    int i=1,k=5;
    while(i<=5)
    {
        int j=1;
        while(j<=i)
        {
            printf("%2d",k);
            j++;
        }
        i++;
        k--;
        printf("\n");
    }
}