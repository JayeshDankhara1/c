#include <stdio.h>

void main()
{   int k=1;
    for(int i=0 ; i<5 ; i++){
            
        for (int j=0; j<=i ;j++){
           printf("%3d", k);
           k++;   
        }
        
        printf("\n");
        
    }
}
