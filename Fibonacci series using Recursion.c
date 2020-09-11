#include<stdio.h>
int fibbonacci();
int main()
{
	int n,sum=0;
	printf("Enter a value :-");
	scanf("%d",&n);
	while(fibbonacci(sum)<=n)
	{
		printf("%d\t",fibbonacci(sum));
		sum++;
	}
	return 0;
}
int fibbonacci(int n)
{
	if(n<=1)
		return n;
	return fibbonacci(n-1)+fibbonacci(n-2);
}
