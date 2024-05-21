#include<stdio.h>
void main()
{
    int i=1;
    char k='A';
    while(i<=5)
    {   char l=k;
        int j=1;
        while(j<=i)
        {   
            printf("%2c",l);
            l++;
            j++;
        }
        i++;
        k++;
        
        printf("\n");
    }
}