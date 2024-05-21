
#include <stdio.h>

void main()
{
    
    int k=0;
    for (int i=1 ; i <=5 ;i++){
        k=i;
        for (int j=0 ; j<5 ; j++){
            
             printf("%3d",k);
             k+=5;
             
          
        }
        
      
        printf("\n");
    }
}
