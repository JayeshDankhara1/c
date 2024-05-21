#include <stdio.h>

void main()
{   char k='A';
    for(char i='E' ; i>='A' ; i--){
        k=i;
        
        for (char j='E'; j>='A' ;j--){
           printf("%2c",k);
           k+=5;
           
        }
        
        printf("\n");
        
    }
}
