#include <stdio.h>

int main()
{
   int t;
    for(int i=1 ; i<=10 ; i+=2){
    printf("%2d",i);
        t+=i;
        
    }
    printf("\nTotal:-%d",t);
    

    return 0;
}
