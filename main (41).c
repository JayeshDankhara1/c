#include<stdio.h>
void main()
{
    int i=1;
    while(i<=5)
    {
        int j=1;
        while(j<=i)
        {
            printf("%2d",j);
            j++;
        }
        i++;
        printf("\n");
    }
}