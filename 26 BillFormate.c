
#include <stdio.h>

void main()

{
    printf("Formet Of Bill\nEnter The Rate :-");
    float Rate;
    scanf("%f",&Rate);
    printf("Enter The Qty :-");
    float Qty;
    scanf("%f",&Qty);
    float Amount= Rate*Qty;
    float Discount= (Amount*5)/100;
    float BillAmount= Amount-Discount;
    float Gst=(BillAmount*18)/100;
    float NetAmount=BillAmount-Gst;
    printf("--------------------------------------------------------------------------------------------\n");
    printf("|%12s|%12s|%12s|%12s|%12s|%12s|%12s|\n","Rate","Qty","Amount","Discount(5%)","BillAmount","Gst(18%)","NetAmount");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("|%12.2f|%12.2f|%12.2f|%12.2f|%12.2f|%12.2f|%12.2f|\n",Rate,Qty,Amount,Discount,BillAmount,Gst,NetAmount);
    printf("--------------------------------------------------------------------------------------------\n");
}
