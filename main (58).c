#include<stdio.h>
void main()
{   int n;
    printf("Enter the Arry of Size:-");
    scanf("%d",&n);
    int num[n],s=0;
    for (int i=0; i<n; i++)
    {
        printf("Enter Eliment %d Valus:-",i+1);
        scanf("%d",&num[i]);
        s+=num[i];
    }
    
    printf("Total Element Sum :-%d",s);
}