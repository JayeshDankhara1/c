#include<stdio.h>
void main()
{   int n;
    printf("Enter the Arry of Size:-");
    scanf("%d",&n);
    int num[n],o=0,e=0;
    for (int i=0; i<n; i++)
    {
        printf("Enter Eliment %d Valus:-",i+1);
        scanf("%d",&num[i]);
        if((i+1)%2!=0)
        {
            o+=num[i];
        }else
        {
            e+=num[i];
        }
    }
    
    printf("Odd Position Sum :-%d \n Even Position Sum :-%d",o,e);
}