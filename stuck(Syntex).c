#include<stdio.h>
#include<string.h>
struct empolye{
    int ma;
    char name[50];
    int salary;
    
};
struct empolye e[3];

void scan(int num)
{
    char name1[50];
    printf("Enter empolye id:-");
    scanf("%d",&e[num].id);
    printf("Enter empolye name:-");
    scanf("%s",&name1);
    //gets(name1);
    strcpy(e[num].name,name1);
    printf("Enter empolye salary:-");
    scanf("%d",&e[num].salary);
    
    
}
void print(int num)
{
    printf("\nEmpolye id:-%d",e[num].id);
    printf("\nEmpolye name:-%s",e[num].name);
    printf("\nEmpolye salary:-%d",e[num].salary);
}
void main()
{
    for (int i=0 ; i<3 ; i++)
    {   
        scan(i);
    }
    for (int i=0 ; i<3 ; i++)
    {   
        print(i);
    }
    
}