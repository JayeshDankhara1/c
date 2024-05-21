#include <stdio.h>

int main()
{
   int t=1;
   
    for(int i=1 ; i<=5 ; i++){
                
             printf("%5d",i*t);
            t=t+t;
            
    }
    
    

    return 0;
}
