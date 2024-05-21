#include<stdio.h>
void s1()
{
    printf("\nPrint 10 to 1 Use No Return No Argumet Function\n");
    for(int i=10 ; i>=1 ; i--)
    {
        printf("%d ",i);
    }
    printf("\n");
}
void s2()
{
    printf("\nPrint 50 to 99 Use No Return No Argumet Function\n");
    for(int i=50 ; i<=99 ; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
}
void s3(int n)
{
    printf("\nPrint 1 to n Use No Return With Argumet Function\n");
    for(int i=1 ; i<=n ; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
}
void s4(int n)
{
    printf("\nPrint n to 1 Use No Return With Argumet Function\n");
    for(int i=n ; i>=1 ; i--)
    {
        printf("%d ",i);
    }
    printf("\n");
}
void s5(int n)
{
    printf("\nPrint -n to n Use No Return With Argumet Function\n");
    for(int i=-n ; i<=n ; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
}
void s6()
{
    printf("\nPrint 1 to 50 Odd Number Use No Return No Argumet Function\n");
    for(int i=1 ; i<=50 ; i+=2)
    {
        printf("%d ",i);
    }
    printf("\n");
}
void s7()
{
    printf("\nPrint 1 to 50 Evan Number Use No Return No Argumet Function\n");
    for(int i=2 ; i<=50 ; i+=2)
    {
        printf("%d ",i);
    }
    printf("\n");
}
void s8()
{
    printf("\nPrint A to Z  Use No Return No Argumet Function\n");
    
    for(char i='A' ; i<='Z' ; i++)
    {
        printf("%c ",i);
    }
    printf("\n");
}
void s9()
{
    printf("\nPrint A-65 to Z-90 Use No Return No Argumet Function\n");
    
    for(char i='A' ; i<='Z' ; i++)
    {
        printf("%c-%d ",i,i);
        
    }
    printf("\n");
}
void s10()
{
    printf("\nPrint A-a to Z-z Use No Return No Argumet Function\n");
    
    for(char i='A' ; i<='Z' ; i++)
    {
        printf("%c-%c ",i,i+32);
        
    }
    printf("\n");
}
int s11()
{
    printf("\nPrint 1 to 10 And Total Eliment Sum Use No Argumet With Return Function\n");
    int t=0;
    for(int i=1 ; i<=10 ; i++)
    {
        printf("%d ",i);
        t+=i;
    }
    printf("\n");
    return t;
}
int s12(int n)
{
    printf("\nPrint 1 to n Odd Eliment And Odd Eliment Sum Use With Argumet With Return Function\n");
    int t=0;
    for(int i=1 ; i<=n ; i+=2)
    {
        printf("%d ",i);
        t+=i;
    }
    printf("\n");
    return t;
}
int s13(int n)
{
    printf("\nPrint 1 to n Evan Eliment And Evan Eliment Sum Use With Argumet No Return Function\n");
    int t=2;
    for(int i=t ; i<=n ; i+=2)
    {
        printf("%d ",i);
        t+=i;
    }
    printf("Evan Eliment Sum:- %d",t);
    printf("\n");

}
void s14(int n)
{
    printf("\nPrint 1,4,9,16....n Use With Argumet No Return Function\n");
    
    for(int i=1 ; i<=n ; i++)
    {
        printf("%d ",(i*i));
        
    }
    printf("\n");

}
void s15(int n)
{
    printf("\nPrint 1,4,3,16,5...n Use With Argumet No Return Function\n");
    
    for(int i=1 ; i<=n ; i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }else
        {
        printf("%d ",(i*i));
        }
        
    }
    printf("\n");

}
void s16(int n)
{
    printf("\nPrint 1,2,4,8,16...n Use With Argumet No Return Function\n");
    int t=1;
    for(int i=t ; i<=n ; i++)
    {
        printf("%5d",t);
         t+=t;
    }
    printf("\n");

}
void s17(int n)
{
    printf("\nPrint 1,4,12,32,80...n Use With Argumet No Return Function\n");
    int t=1;
    for(int i=1 ; i<=n ; i++)
    {
        
        printf("%d ",(i*t));
        t+=t;
        
        
    }
    printf("\n");
}
void s18()
{
    printf("\nPrint A C E G I Use NO Argumet No Return Function\n");
    
    for(char i='A' ; i<='N'; i+=2)
    {
         printf("%c ",i);
    }
    printf("\n");
}
void s19()
{
    printf("\nPrint A c E g I Use NO Argumet No Return Function\n");
    
    int t=1;
    for(char i='A' ; i<='N'; i+=2)
    {   if(t%2!=0){
             printf("%c ",i);
        }
        else{
            printf("%c ",i+32);
        }
        t++;
    }
   
    printf("\n");
}
void s20()
{
    printf("\nPrint 0,1,1,2,3...(Fibonanci) Use NO Argumet No Return Function\n");
    int t,t1=0,t2=1;
    for(int i=1 ; i<=10; i++)
    {
        printf("%d ",t1);
        t=t1+t2;
        t1=t2;
        t2=t;
    }
}


void main()
{
    s1();// no Argumet No Return
    s2();
    s3(4);// With Argumet No Return
    s4(10);
    s5(5);
    s6();
    s7();
    s8();
    s9();
    s10();
    printf("Total:- %d\n",s11());// No Argumet With Return
    printf("Odd Eliment Sum:- %d\n",s12(20));// With Argumet With Return
    s13(20); 
    s14(10);
    s15(10);
    s16(10);
    s17(10);
    s18();
    s19();
    s20();
}