#include<stdio.h>
int main()
{
	int total, n;
	while(n!=0)
	{
	printf("Enter Number: ");
	scanf("%d", &n);
	total = total + n;
	}
	printf("Total= %d", total);
	return 0;
}