#include <stdio.h>
int gcd(int x, int y)
{
	if(y==0)
	{
		return x;
	}
	else
	{
		return gcd(y,x%y);
	}
}
int main()
{
	int num1,num2,GCD;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	GCD=gcd(num1,num2);
	printf("GCD: %d",GCD);
	printf("\nLCM: %d",(num1*num2)/GCD);
	return 0;
}