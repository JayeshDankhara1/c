#include<stdio.h>
int en()
{   int n;
    printf("\nEnter The Valus:-");
    scanf("%d",&n);
    return n;
}

void sum()
{
int a,b;
a=en();
b=en();
printf("Total s:-%d",a+b);

}
int sum1()
{
int a,b;
a=en();
b=en();


return a+b;
}

int sum2(int a, int b)
{
    return a+b;
}
void sum3(int a, int b)
{
    printf("Total:-%d",a+b);
}

void main(){



sum();

}