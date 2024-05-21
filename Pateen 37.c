#include <stdio.h>

void main()
{   int k=5;
    for(int i=1 ; i<=5 ; i++){
        
        for (int j=1; j<=i ;j++){
           printf("%2d", k);
           
        }
        k--;
        printf("\n");
        
    }
}
