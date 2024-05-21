#include<stdio.h>
void main()
{   for(int j=1 ; j<=2 ; j++)
    {
    int n;
    printf("\nEnter the %d Size of Arry:-",j);
    scanf("%d",&n);
    int num[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter %d Number:- ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0 ; i<n ; i++)
    {
     printf("%d,",num[i]);   
    }
    
    }
}