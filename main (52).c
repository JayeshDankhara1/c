#include<stdio.h>
void main()
{
    int i=1,k=1;
    
    while(i<=5)
    {   
        int j=1;
        while(j<=i)
        {   if(k%2!=0)
            {
            printf("1 ");
            }
            else{
            printf("0 ");
            }
            j++;
            k++;
        }
        i++;
        
        
        
        printf("\n");
    }
}