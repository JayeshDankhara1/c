#include <stdio.h>

void main()
{   int k=1;
    for (int i =1 ; i<=5 ; i++){
        
        for(int j=1; j<=i ;j++){
            printf("%3d",k);
            k+=2;
        }
        
        printf("\n");
    }
}
