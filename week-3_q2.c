#include <stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int num,factorial;
	printf("Enter a number to find its factorial:");
	scanf("%d",&num);
	factorial=fact(num);
	printf("Factorial of %d = %d\n",num,factorial);
	return 0;
}