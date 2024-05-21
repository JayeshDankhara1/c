#include <stdio.h>

int main()
{
   int t=1;
   
    for(int i='A' ; i<='E' ; i++){
        for (int j=1 ; j<= 5 ; j++){
            printf("%2c",i);
        }
        printf("\n");
    }
    
    

    return 0;
}