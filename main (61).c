#include<stdio.h>
void main()
{   
    int n;
    printf("Enter The Size Of Arry:-");
    scanf("%d",&n);
    int num[2][n][n];
    for(int i=0; i<=1;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int l=0;l<n;l++)
            {   printf("Enter The %d, Arry Of Index[%d][%d] Valus:-",i+1,j+1,l+1);
                scanf("%d",&num[i][j][l]);
            }
        }
        printf("\n");
    }
        int t=0;
        for(int i=0 ; i<=1;i++)
        {int sum=0;
            for(int j=0;j<n;j++)
            {
                for(int l=0;l<n;l++)
                {
                printf("%3d",num[i][j][l]);
                sum+=num[i][j][l];
                }
            printf("\n");
            }
            t+=sum;
            printf("%d Arry All Eliment Sum :-%d\n",(i+1),sum);
        }
        printf("Grand Total :-%d",t);
    
    
}