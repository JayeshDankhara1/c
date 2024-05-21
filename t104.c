/*1
  2  3
  4  5  6
  7  8  9 10
 11 12 13 14 15*/
#include <stdio.h>

int main()
{ int l=1;
    for(int i=5 ; i>=1 ; i--)
    {
        for (int j=5 ; j>=i ; j--)
        {
            printf("%3d",l++);
        }
        printf("\n");
    }
    
    return 0;
}