#include <stdio.h>

int main()
{ char a='A';
    for(int i=5 ; i>=1 ; i--)
    {
        for (int j=5 ; j>=i ; j--)
        {
         printf("%3c",a++);
        }
 
        printf("\n");
    }
    
    return 0;
}