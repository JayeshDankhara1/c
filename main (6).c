#include <stdio.h>

int main()
{ 
    for(int i=5 ; i>=1 ; i--)
    {char a='A';
        for (int j=5 ; j>=i ; j--)
        {
            printf("%3c",a++);
        }
        printf("\n");
    }
    
    return 0;
}