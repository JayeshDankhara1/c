#include <stdio.h>

int main()
{   int n,sum=0;
    printf("Enter The Valuse :-");
    scanf("%d",&n);
    while(n!=0)
    {
        int c=n%10;
        n=n/10;
        sum+=c;
    }
    printf("Sum Of Digit's:-%d",sum);
    return 0;
}