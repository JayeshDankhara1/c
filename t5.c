#include <stdio.h>

int main()
{
   int t=1;
   
    for(int i=2 ; i<=10 ; i+=2){
        for (int j=1 ; j<= 5 ; j++){
            printf("%3d",i);
        }
        printf("\n");
    }
    
    

    return 0;
}