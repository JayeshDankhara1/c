#include<stdio.h>
void main()
{
    int a[3][3];
    
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            scanf("%d",&a[i][j]);
            
        }
        printf("\n");
    }
    
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {   if(a[i][j]==0)
            {
            printf(" ");
            }else
            {
            printf("%d",a[i][j]);
            }
        }
        printf("\n");
    }
}