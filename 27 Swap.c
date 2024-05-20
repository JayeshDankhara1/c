
#include <stdio.h>

void main()

{
    printf("Number Swap\nEnter The Fast Number :-");
    int n1;
    scanf("%d",&n1);
    printf("Enter The Secound Number :-");
    int n2;
    scanf("%d",&n2);
    int swap=n1;
    n1=n2;
    n2=swap;
    printf("Fast Value :- %d \n And, Secound Value :-%d",n1,n2);
}
