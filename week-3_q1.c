#include <stdio.h>
int square(int num)
{
	return(num*num);
}
int main()
{
	int num , sq;
	
	printf("Enter a number :");
	scanf("%d",&num);
	sq = square(num);
	printf("Square of %d = %d\n ",num,sq);
	return 0;
} 