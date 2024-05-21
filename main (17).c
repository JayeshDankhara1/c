#include <stdio.h>

int main()
{
    for (int i=1 ; i<=9 ; i++)
    { if(i<=5)
        {
        int l=5-i;
        for(int j=1 ; j<=5 ; j++)
        {   if(l>=j)
            {
                printf(" ");
            }else
            {
                printf(" *");    
            }
            
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