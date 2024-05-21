#include <stdio.h>

int main()
{
    for (int i=1 ; i<=9 ; i++)
    { if(i<=5)
        {
        for (int j=1 ; j<=5-i ; j++)
        {
            printf(" ");
        }
        for(int j=1 ; j<=i ; j++)
        {
            printf(" *");
        }
        }else
        {
        for (int j=6 ; j<=i ; j++)
        {
            printf(" ");
        }
        for (int j=i ; j<=9 ; j++)
        {
            printf(" *");
        }
        }
        printf("\n");
    }
    return 0;
}