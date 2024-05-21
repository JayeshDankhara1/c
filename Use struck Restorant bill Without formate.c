#include<stdio.h>
#include<string.h>
struct Bill
{
  char C_name[50];
  char Dis[20];
  int Rate;
  int Qty;
  int Amount;
  float Gst;
  float Net_Amount;
} c;
void Menu (int index)
{
  switch (index)
	{
	case 1:
	  strcpy (c.Dis, "CHEESE BURGER");
	  break;
	case 2:
	  strcpy (c.Dis, "BEEF BURGER");
	  break;
	case 3:
	  strcpy (c.Dis, "CHICKEN BURGER");
	  break;
	case 4:
	  strcpy (c.Dis, "VEGETABLE BURGER");
	  break;
	case 5:
	  strcpy (c.Dis, "FISH BURGER");
	  break;
	}
}

int Rate (int index)
{
  int r;
  if (index == 1)
	{
	  return 100;
	}
  else if (index == 2)
	{
	  return 60;
	}
  else if (index == 3)
	{
	  return 120;
	}
  else if (index == 4)
	{
	  return 90;
	}
  else if (index == 5)
	{
	  return 130;
	}

}

void scan ()
{  
  system("clear");    
  printf ("Enter The Customer Name:-");
  scanf ("%s",&c.C_name);
  printf("1.CHEESE BURGER\n2.BEEF BURGER\n3.CHICKEN BURGER\n4.VEGETABLE BURGER\n5.FISH BURGER");
  printf("\nEnter Choice:-");
	int i;
  scanf ("%d",&i);
  Menu (i);
  c.Rate = Rate (i);
  printf ("Enter The Qty:-");
  scanf ("%d",&c.Qty);
  c.Amount = c.Qty * c.Rate;
  c.Gst = 0.18 * c.Amount;
  c.Net_Amount = c.Gst + c.Amount;
    
}

void print ()
{   system("clear");
    printf("\nCustomer Name:-%s",c.C_name);
    printf("\nDisciption:-%s",c.Dis);
    printf("\nRate:-%d",c.Rate);
    printf("\nQty:-%d",c.Qty);
    printf("\nAmount:-%d",c.Amount);
    printf("\nGST18%%:-%.2f",c.Gst);
    printf("\nNet Amount:-%.2f",c.Net_Amount);
}

void main ()
{
    scan();
    print();

}
