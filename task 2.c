#include<stdio.h>
int main()
{
	int n, flag=0;
	printf("Enter Number: ");
	scanf("%d", &n);
	for(int i = n-1; i>1; i--){
		if(n%i==0)
		{
		flag = 1;
		}
	}
	if(flag==1){
		printf("NOT A PRIME");
	}
	else{
		printf("PRIME");
	}
	return 0;
}