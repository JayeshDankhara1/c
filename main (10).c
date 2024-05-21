#include <stdio.h>

int main()
{ 
    for(char i='A' ; i<='E' ; i++)
    { char k=i;
        for (char j='A' ; j<=i ; j++)
        {
          printf("%2c",k--);
        }
        printf("\n");
    }
    
    return 0;
}