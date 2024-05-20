#include<stdio.h>
void main()
{
int num;
printf("Enter The Number :- ");
scanf("%d",&num);
if(num%5==0&&num%3==0)
{
printf("Number Is Divisibal!");
}
else
{
printf("number Is Not Divisibal!");
}
}