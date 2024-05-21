#include<stdio.h>
void main()
{
    int i=1;
    char k='A';
    
    while(i<=5)
    {   
        int j=1;
        char l=k;
        while(j<=i)
        {   printf("%2c",l);
            j++;
            l--;
        }
        i++;
        k++;
        
        
        
        printf("\n");
    }
}