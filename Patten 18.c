#include <stdio.h>

void main()
{   
    for(int i=0 ; i<5 ; i++){
        
        
        for (int j=5 ; j>=1 ;j--){
           if((i+j)%2!=0){
               printf(" 0");
           }else{
               printf(" 1");
           }
        }
        printf("\n");
        
    }
}