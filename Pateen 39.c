#include <stdio.h>

void main()
{   
    for(int i=0 ; i<5 ; i++){
        int k=5-i;    
        for (int j=0; j<=i ;j++){
           printf("%2d", k);
           k++;   
        }
        
        printf("\n");
        
    }
}
