#include <stdio.h>

int main()
{   int x;
    for(int i=1; i<=1000; i++)
    { x=i;
        int n=0;
        while(x!=0)
        {
            n=n*10+x%10;
            x=x/10;
        }
        if(i==n)
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}