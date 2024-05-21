#include<stdio.h>
void sintrest(int Amount , int Rate, int Time)
{
    float final=(Amount*Rate*Time)/100;
    printf("Simpal Interst :-%4.2f Rs",final);
}   

void main()
{
    sintrest(100,2,2);
    
    
    
}
