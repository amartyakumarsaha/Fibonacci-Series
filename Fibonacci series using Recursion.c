#include<stdio.h>
int fibonacci();
int main()
{
	int n,sum=0;
	printf("Enter a value :-");
	scanf("%d",&n);
	while(fibonacci(sum)<=n)
	{
		printf("%d\t",fibonacci(sum));
		sum++;
	}
	return 0;
}
int fibonacci(int n)
{
	if(n<=1)
		return n;
	return fibonacci(n-1)+fibonacci(n-2);
}
