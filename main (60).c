#include<stdio.h>
void main()
{   int u=0,l=0,d=0,m;
    printf("Enter The Size of Arry:-");
    scanf("%d",&m);
    int n[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("Enter The Index[%d][%d] Eliment Valus:-",i+1,j+1);
            scanf("%d",&n[i][j]);
        }
    }
    for (int i=0; i<m;i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%2d",n[i][j]);
            if(i==j)
            {
                d+=n[i][j];
            }else if(i<j)
            {
                u+=n[i][j];
            }else if(j<i)
            {
                l+=n[i][j];
            }
            
        }
        printf("\n");
    }
    printf("Upper Triangl Sum:- %d\nLower Triangel Sum:- %d\nDigonal Aliment sum:- %d",u,l,d);
}