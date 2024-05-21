#include <stdio.h>

int main()
{ 
    for(int i=5 ; i>=1 ; i--)
    { int k=i;
        for (int j=5 ; j>=i ; j--)
        {
          printf("%2d",k++);
        }
        printf("\n");
    }
    
    return 0;
}