#include<stdio.h>
struct Bill
{
    char Name[50];
    int Lunit;
    int Cunit;
    int Unit;
    int fix;
    float Charge;
    float A_Charge;
    float Net_Amount;
    
};
struct Bill b[5];
float Cal_A_Charge(int Bill)
{
    if((b[Bill].Charge+b[Bill].fix)>=300)
    {
        return 0.15;
    }else{
        return 0;
    }
}
float Cal_Anrgy(int Unit)
{   
    if(Unit<=100){ return 0.60;}
    else if(Unit<=200){ return 0.80;}
    else{ return 0.90; }
}
void entery(int Bill)
{   
    printf("\nEnter You Customer Name:-");
    scanf("%s",&b[Bill].Name);
    printf("Enter You Last Redinge:-");
    scanf("%d",&b[Bill].Lunit);
    printf("Enter You Curnte Redinge:-");
    scanf("%d",&b[Bill].Cunit);
    b[Bill].Unit=b[Bill].Cunit-b[Bill].Lunit;
    float c=Cal_Anrgy(b[Bill].Unit);
    b[Bill].Charge=b[Bill].Unit * c;
    b[Bill].fix=50;
    float ac=Cal_A_Charge(Bill);
    b[Bill].A_Charge=ac*(b[Bill].Charge + b[Bill].fix);
    b[Bill].Net_Amount=b[Bill].A_Charge+b[Bill].Charge+b[Bill].fix;
}

void BillPrint(int Bill)
{
    printf("\n--------------------------------------------");
    printf("\nCustomer Name:-%s",b[Bill].Name);
    printf("\n--------------------------------------------");
    printf("\n|%6s|%8s|%8s|%8s|%8s|","Total","Charge","Fix", "A Charge","Net");
    printf("\n|%6s|%6.2f P|%8s|%6.2f P|%8s|","Unit",Cal_Anrgy(b[Bill].Unit),"Charge",Cal_A_Charge(Bill),"Amount");
    printf("\n--------------------------------------------");
    printf("\n|%6d|%8.2f|%8d|%8.2f|%8.2f|",b[Bill].Unit,b[Bill].Charge,b[Bill].fix,b[Bill].A_Charge,b[Bill].Net_Amount);
    printf("\n--------------------------------------------");
}
void main()
{   system("clear");
    for(int i=0 ; i<5; i++)
    {
    entery(i);
    BillPrint(i);
    }
}