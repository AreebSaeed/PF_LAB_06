#include<stdio.h>
int main()
{
	int pass, pin=2004, tries=3;
	while(tries>0)
	{
		printf("Enter your pin: ");
		scanf("%d", &pass);
		if( pass== pin)
		{
			printf("Correct Pin\n");
			return 0;
		}
		else 
		{
			printf("Incorrect Pin\n");
			tries--;
			
		}

	}
	printf("Account Locked");
	return 0;
	
}