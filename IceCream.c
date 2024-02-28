//Program for calculating total bill of ice-cream
//And also providing discount if total bill is more than Rs.200
//Developed By - Shabbir   Dated - 28.02.2024
#include<stdio.h>
int main()
{
	int order, qty, total=0 , sub=0;
	float discount=0.0,net_bill=0.0;
	
	//Menu List
	printf("\t *****MENU LIST*****");
	printf("\n\t 1.Ice-Cream : Rs. 25");
	printf("\n\t 2.Cone : Rs. 35");
	printf("\n\t 3.Pestries : Rs. 45");
	printf("\n\t 4.Pizza : Rs. 100");
	printf("\n\t 5.Exit");	
	
	//Taking Order No as Input from User
	printf("\nEnter the Order No:");
	scanf("%d",&order);
	
	if(order >=1 && order <=4)
	{
		printf("\nEnter the Quantity:"); 
		scanf("%d",&qty);
		
		if(order == 1)
		{
			printf("\nYour Order is Ice-Cream with Price Rs.25");
			total = 25 * qty ;
		}
		else if (order == 2)
		{
			printf("\nYour Order is Cone with Price Rs.35");
			total = 35 * qty ;	
		}
		else if (order == 3)
		{
			printf("\nYour Order is pestries with Price Rs.45");
			total = 45 * qty ;	
		}
		else if (order == 4)
		{
			printf("\nYour Order is Pizza with Price Rs.100");	
			total = 100 * qty ;	
		}
		
		printf("\nTotal = %d",total);
		
		if(total>=200)
		{
			discount = total * 0.20;
			printf("\nDiscount=%f", discount);
		
			net_bill = total - discount;
			printf("\nNet Bill=%f", net_bill);
		}
		else
		{
		sub = 200 - total;
		printf("\nWe are Sorry , we are Unable to give you Discount");
		printf("\nIf you Want Discount Atleast Buy Something of Rs.%d",sub);
		}
		
	}
	else if ( order == 5)
	{
		printf("\nThank You , Visit Again");	
	}
	else
	{
		printf("\nNot a Valid Menu List Number");
	}

	return 0;
}
