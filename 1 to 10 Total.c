#include <stdio.h>

int main()
{
   int t;
    for(int i=1 ; i<=10 ; i++){
    printf("%2d",i);
        t+=i;
        t=t+i;
    }
    printf("\nTotal:-%d",t);
    

    return 0;
}
