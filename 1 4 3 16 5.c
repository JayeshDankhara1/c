#include <stdio.h>

int main()
{
   int t;
    for(int i=1 ; i<=15 ; i++){
   
        if(i%2==0){
         printf("%5d",i*i);}
         else{
             printf("%5d",i);
         }
    }
    // printf("\nTotal:-%d",t);
    

    return 0;
}
