#include<stdio.h>
int main()
{
	int n, num, l=0, sl=1, t, i, flag = 0, j;
	printf("Enter Number: ");
	scanf("%d", &n);
	for(j = n-1; j>1; j--){
		if(n%j==0)
		{
		flag = 1;
		}
	}
	if(flag==1){
		printf("NOT A PRIME\n");
	}
	else{
		printf("PRIME\n");
	
	num=n;
	printf("%d %d", l,sl);
	for(i = num-2; i>0; i--)
	{
		t= l+sl;
		printf(" %d", t);
		l=sl;
		sl=t;
		
	}
}
	return 0;
}
