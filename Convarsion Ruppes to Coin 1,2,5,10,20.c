#include<stdio.h>

void coin(int a);

void main()
{
    // for(int i=1; i<=38; i++)
    // {   printf("%d  Rs\n",i);
    //     coin(i);
        
    // }
    coin(100);
}
void coin(int a){
    int c1=0,c2=0,c5=0,c10=0,c20=0,tco=0,sum=0;
    
    while(a!=0)
        {   
        if(a>=38)
        {   
            c1++;
            c2++;
            c5++;
            c10++;
            c20++;
            a-=38;
        }else if(a>=20)
 
         {
            c20++;
            a-=20;
        }else if(a>=10)
        {
            c10++;
            a-=10;
        }
        else if(a>=5)
        {
            c5++;
            a-=5;
        }else if(a>=2)
        {
            c2++;
            a-=2;
        }else if(a>=1)
        {
            c1++;
            a-=1;
        }
        tco=c1+c2+c5+c10+c20;
        sum=(c1*1)+(c2*2)+(c5*5)+(c10*10)+(c20*20);
    }

    printf(" 1 * %3d=%3d\n 2 * %3d=%3d\n 5 * %3d=%3d\n10 * %3d=%3d\n20 * %3d=%3d\n",c1,(c1*1),c2,(c2*2),c5,(c5*5),c10,(c10*10),c20,(c20*20));
    printf("Total Coin:-%d \nTotal Amount:-%d\n\n\n",tco,sum);
    
}
