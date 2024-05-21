#include <stdio.h>

int main()
{ char a='A',b='a';
    for(int i=5 ; i>=1 ; i--)
    {
        for (int j=5 ; j>=i ; j--)
        {
            if(i%2!=0)
            {
                printf("%3c",a);
            }else
            {
                 printf("%3c",b);
            }
            a++;
            b++;
        }
        printf("\n");
    }
    
    return 0;
}