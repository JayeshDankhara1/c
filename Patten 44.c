#include <stdio.h>

void main()
{   int k=0;
    for (int i =1 ; i<=5 ; i++){
        k+=i;
        for(int j=k;j>k-i;j--){
            printf("%3d",j);
        }
        
        printf("\n");
    }
}
