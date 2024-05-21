#include <stdio.h>

void main()
{   char k='A';
    for(char i='A' ; i<='E' ; i++){
        k=i;
        
        for (char j='E'; j>='A' ;j--){
           printf("%2c",k);
           k++;
           
        }
        
        printf("\n");
        
    }
}
