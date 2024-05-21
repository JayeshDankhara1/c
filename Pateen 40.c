#include <stdio.h>

void main()
{   
    for(int i=0 ; i<5 ; i++){
        int k=2;    
        for (int j=0; j<=i ;j++){
           printf("%3d", k);
           k+=2;   
        }
        
        printf("\n");
        
    }
}
