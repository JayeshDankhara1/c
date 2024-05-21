#include<stdio.h>
void main()
{   for(int j=0 ; j<5 ; j++)
    {
        int m[3],s=0,p;
        char f;
        for(int i=0 ; i<3 ; i++)
        {
        printf("roll no :-%d  subject%d:-",j+1,i+1);
        scanf("%d",&m[i]);
        s+=m[i];
        }
        p=s/3;
        if(p>80)
        {
            f='A';
        }else if(p>65)
        {
            f='B';
        }else if(p>55)
        {
            f='C';
        }else if(p>35)
        {
            f='D';
        }else
        {
            f='F';
        }
        
        printf("\n Roll No:-%d Total Marks:-%d  Perchantege :-%d%% Grede :-%c\n",j+1,s,p,f);
        
    }
    
}