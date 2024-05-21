#include <stdio.h>

int main()
{
   char t='A';
   
    for(int i=1 ; i<=5 ; i++){
        for (int j=1 ; j<= 5 ; j++){
            printf("%3c",t);
            t++;
        }
        printf("\n");
    }
    
    

    return 0;
}