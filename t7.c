#include <stdio.h>

int main()
{
   int t=1;
   
    for(int i=1 ; i<=5 ; i++){
        for (int j=1 ; j<= 5 ; j++){
            printf("%3d",t);
            t++;
        }
        printf("\n");
    }
    
    

    return 0;
}