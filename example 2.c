#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter Table: ");
	scanf("%d", &a);
	printf("Enter Range: ");
	scanf("%d", &d);
	for(b=1;b<=d;b++)
	{
	c=a*b;
	printf("%d x %d = %d\n", a,b,c);
	}
	return 0;
	
}