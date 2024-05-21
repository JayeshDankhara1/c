#include <stdio.h>

int main()
{
   int t;
    for(int i=0 ; i<=10 ; i+=2){
    printf("%3d",i);
        t+=i;
        
    }
    printf("\nTotal:-%d",t);
    

    return 0;
}
