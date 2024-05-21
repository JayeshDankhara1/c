#include<stdio.h>
void main()
{
    int i=1;
    while(i<=5)
    {   char k='A';
        int j=1;
        while(j<=i)
        {
            printf("%3c",k);
            k++;
            j++;
        }
        i++;
        
        printf("\n");
    }
}