#include <stdio.h>

int main()
{
   
   int t=1;
    for(char i='A' ; i<='N'; i+=2)
    {   if(t%2!=0){
             printf("%c ",i);
        }
        else{
            printf("%c ",i+32);
        }
        t++;
    }
    
    

    return 0;
}
