#include<stdio.h>
int fibo(int n);
void main()
{

   int n;

   printf("Enter the number of terms\n");
   scanf("%d", &n);

   printf("Fibonacci Series: ");
   
   for (int i = 0; i < n; i++) {
      printf("%d ",fibo(i));
   }
   
   
 
}
int fibo(int n)
{
    if(n<=1)
    {
        if(n==0)
        {  
            return 0;
        }else
        {   
            return 1;
        }
    }else
    {   
        return (fibo(n-1) + fibo(n-2));

        
    }
}
