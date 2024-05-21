#include <stdio.h>

void main()
{   int k=0,l=0;
    for(int i=1 ; i<=5 ; i++){
        k=6-i;
        l=i;
        for (int j=5 ; j>=1 ;j--){
            
            if (j%2!=0){
               printf("%3d",k);
               
            }
            else{
                printf("%3d",l);
                
            }
            k+=5;
            l+=5;
        }
        printf("\n");
    }
}
