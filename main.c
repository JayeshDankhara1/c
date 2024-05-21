#include <stdio.h>

int main()
{   int l,k=1,s;
    for (int i =5 ; i>=1 ; i--)
    {   l=k;
        s=i;
        for (int j=5 ; j>=i ; j--)
        {
            printf("%3d",l);
            l-=s;
            s++;
        }
        printf("\n");
        k=k+i;
    }   

    return 0;
}
