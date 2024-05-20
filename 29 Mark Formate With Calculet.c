
#include <stdio.h>

void main()

{
    printf("Enter The Fast Subject Mark :-");
    int s1;
    scanf("%d",&s1);
    printf("Enter The Secound Subject Mark :-");
    int s2;
    scanf("%d",&s2);
    printf("Enter The Thard Subject Mark :-");
    int s3;
    scanf("%d",&s3);
    int Total=s1+s2+s3;
    float Pr=Total/3;
    printf("--------------------------------------------------------\n");
    printf("|%10s|%10s|%10s|%10s|%10s|\n","Subject1","Subject2","Subject3","Total","Parcentage");
    printf("--------------------------------------------------------\n");
    printf("|%10d|%10d|%10d|%10d|%10.2f|\n",s1,s2,s3,Total,Pr);
    printf("--------------------------------------------------------\n");
}
