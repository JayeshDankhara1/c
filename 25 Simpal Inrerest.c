
#include <stdio.h>

void main()

{
    printf("Finde Simal Interest \n Enter The Principal :-");
    float p;
    scanf("%f",&p);
    printf("Enter The Rate of Interest(Montly) :-");
    float r;
    scanf("%f",&r);
    printf("Enter The Time(Montly) :-");
    float t;
    scanf("%f",&t);
    
    printf("Area of Square : %.2f",(p*r*t)/100);

    
}
