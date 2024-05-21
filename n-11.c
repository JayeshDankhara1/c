#include <stdio.h>

int main()
{
    int n;
    printf("enter the number :-");
    scanf("%d",&n);

    for(int i=n ; i>=1; i--)
    printf("%3d",i);

    return 0;
}
