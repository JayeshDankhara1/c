#include<stdio.h>
void main()
{
    int i=1;
    char k='A';
    while(i<=5)
    {   
        int j=1;
        while(j<=i)
        {   if(j%2==0)
            {
            printf("%3c",k);    
            }
            else
            {
            printf("%3c",k+32);
            }
            
            k++;
            j++;
        }
        i++;
        
        printf("\n");
    }
}