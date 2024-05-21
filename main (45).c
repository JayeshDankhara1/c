#include<stdio.h>
void main()
{
    int i=1;
    while(i<=5)
    {   int k=5;
        int j=1;
        while(j<=i)
        {
            printf("%3d",k);
            k--;
            j++;
        }
        i++;
        
        printf("\n");
    }
}