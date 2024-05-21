#include<stdio.h>
#include<string.h>
struct student{
    int Roll_No;
    char name[50];
    int mark[5];
    int Total;
    float Par;
};
struct student e[3];

void scan(int num)
{
    int total=0;
    float par=0;
    char name1[50];
    printf("Enter Sutent Roll No:-");
    scanf("%d",&e[num].Roll_No);
    printf("Enter Student name:-");
    scanf("%s",&name1);
    //gets(name1);
    strcpy(e[num].name,name1);
    for(int j=0; j<5; j++)
    {
    printf("%s subject %d marks:-",name1,j+1);
    scanf("%d",&e[num].mark[j]);
    total+=e[num].mark[j];
    }
    e[num].Total=total;
    e[num].Par=total/5;
}
void print(int num)
{
    printf("\nSutent Roll_No:-%d",e[num].Roll_No);
    printf("\nsutent name:-%s",e[num].name);
    
    for(int j=0; j<5; j++)
    {
    printf("\n%s subject %d marks:-%d",e[num].name,j+1,e[num].mark[j]);
    }
    printf("\n%s Total Mark's:-%d",e[num].name,e[num].Total);
    printf("\n%s Parcantage:-%4.2f %%\n\n\n",e[num].name,e[num].Par);
}
void main()
{
    for (int i=0 ; i<1 ; i++)
    {   
        scan(i);
    }
    for (int i=0 ; i<1 ; i++)
    {   
        print(i);
    }
   
}