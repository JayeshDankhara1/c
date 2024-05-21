
#include <stdio.h>

void main()
{
    
    int k=2;
    for (int i=5 ; i >=1 ;i--){
        for (int j=5 ; j>=1 ; j--){
            printf("%3d",k);
            k+=2;
        }
        printf("\n");
    }
}
