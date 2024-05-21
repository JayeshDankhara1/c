#include <stdio.h>

int main()
{   
    for(int i=1; i<=5 ; i++)
    { int k=1;
        for(int j=5-i ; j>=1 ; j--)
        {
            printf("  ");
        }
        for(int j=2; j<=(i*2) ; j++)
        
        { 
            if(j<=i){
            printf("%2d",k);
            k++;    
            }else{
            printf("%2d",k);
            k--;
            }
        }
        printf("\n");
    }
    

    return 0;
}
