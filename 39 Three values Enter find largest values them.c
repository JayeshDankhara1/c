#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter The fast values :- ");
scanf("%d",&a);
printf("Enter The secound valuse :- ");
scanf("%d",&b);
printf("Enter The Thard valuse :- ");
scanf("%d",&c);

if(a<b && b<c)
{
printf("Thard valuse Is Big!");
}
else if(a>b)
{

printf("Fast Valuse Is Big!");
}
else
{
printf("secound valuse is Big!");
}

}