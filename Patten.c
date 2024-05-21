#include <stdio.h>

void main()
{   
    for(int i=0 ; i<5 ; i++){
        
        
        for (int j=5 ; j>=1 ;j--){
           if(i%2!=1){
               printf(" 1");
           }else{
               printf(" 0");
           }
        }
        printf("\n");
        
    }
}
