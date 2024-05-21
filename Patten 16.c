#include <stdio.h>

void main()
{   int k=0,l=0;
    for(int i=1 ; i<=5 ; i++){
        k=i;
        
        for (int j=5 ; j>=1 ;j--){
           printf ("%2d",k);
           k++;
        }
        printf("\n");
    }
}
