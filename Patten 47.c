#include <stdio.h>

void main()
{   int k=0;
    for (int i =1 ; i<=5 ; i++){
        k=i;
        for(int j=1; j<=i ;j++){
            printf("%3d",k);
            k+=i;
        }
        
        printf("\n");
    }
}
