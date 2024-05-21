#include <stdio.h>

void main()
{   int k=1,l=1;
    for(int i=0 ; i<5 ; i++){
        k=l;
        
        for (int j=5 ; j>=1 ;j--){
           printf ("%3d",k);
           k+=2;
        }
        printf("\n");
        l+=2;
    }
}
