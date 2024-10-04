#include<stdio.h>
int main()
{
	float cost, qty, rate=1.50;
	char choice;
	
	do{
		printf("Enter the number of litres you want to purchase: ");
		scanf("%f", &qty);
		cost= rate*qty;
		
		printf("The total cost is: $%.2f \n", cost);
		
		printf("Do you want to purchase more fuel (y/n) ?");
		scanf(" %c", &choice);
	} while(choice=='y' || choice=='Y');
	
	return 0;
	
}
