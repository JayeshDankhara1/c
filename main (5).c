#include <stdio.h>

int main()
{ int l=1;
    for(int i=5 ; i>=1 ; i--)
    {
        for (int j=5 ; j>=i ; j--)
        {
            printf("%3d",j);
        }
        printf("\n");
    }
    
    return 0;
}