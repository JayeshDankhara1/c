#include<stdio.h>
void main()
{
    int i=1;
    int k=5;
    while(i<=5)
    {   int l=k;
        int j=1;
        while(j<=i)
        {   
            printf("%2d",l);
            l++;
            
            j++;
        }
        i++;
        k--;
        
        
        printf("\n");
    }
}