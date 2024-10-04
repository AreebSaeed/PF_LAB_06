#include<stdio.h>
int main()
{
	int n, remainder, reversed=0; 
	printf("Enter number: ");
	scanf("%d", &n);
	do{
		remainder = n % 10;
		reversed =  reversed* 10 + remainder;
		n= n/10;
		}
		while(n>0);
		printf("Reversed number: %d", reversed);
		
		return 0;
	
	
}
