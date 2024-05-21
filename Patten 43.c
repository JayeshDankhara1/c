#include <stdio.h>

void main()
{   
    for(int i=1 ; i<=5 ; i++){
        int k=i-1;      
        for (int j=1; j<=i ;j++){
           printf("%3d", k+i);
           k+=2;
        }
        printf("\n");
        
    }
}
