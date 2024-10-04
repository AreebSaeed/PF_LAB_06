#include<stdio.h>
int main()
{
	int n, i, factorial=1;
	printf("Enter number: ");
	scanf("%d", &n);
	for(i=1; i <= n; i++)
	{
		factorial=factorial*i;
		
	}
	printf(" The factorial of the number is: %d", factorial);
	return 0;
	
}
