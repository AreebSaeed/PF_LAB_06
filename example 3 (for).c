#include<stdio.h>
int main()
{
	int n, i;
	printf("Enter Range of Even or Odd: ");
	scanf("%d", &n);
	if(n % 2 == 0)
	{ 
	printf("Even\n");
	for(i=2; i<=n; i= i + 2)
	{
	printf("%d\n", i);
	}
	}
	else if( n % 2 != 0)
	{
		printf("Odd\n");
		for(i=1; i<=n; i= i+2)
	{
		printf("%d\n",i);
		}	
	}
	return 0;
}