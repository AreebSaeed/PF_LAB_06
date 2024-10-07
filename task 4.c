#include<stdio.h>
int main()
{
	int n, sum=0, rem=1, temp;
	printf("ENTER NUMBER: ");
	scanf("%d", &n);
	temp=n;
	while(n!=0)
	{
	rem= n%10;
	sum+=rem*rem*rem;
	n -= rem;
	n /= 10;
	}
	if(sum==temp)
	printf("The Number is Armstrong");
	else
	printf("The number is not Armstrong");
	return 0;
	
}
