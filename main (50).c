#include<stdio.h>
void main()
{
    int i=1;
    char k='A';
    while(i<=5)
    {   
        int j=1;
        while(j<=i)
        {   
            printf("%2c",k);
            k++;
            j++;
        }
        i++;
        
        
        printf("\n");
    }
}