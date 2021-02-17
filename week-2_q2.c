#include<stdio.h>

int main()
{
    int a[50],i,n,sum=0,even_position=0;

	printf("How many elements ?");
	scanf("%d",&n);
    
	printf("Enter the Array:");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
            sum=sum+a[i];
    }
    printf("Total Sum of Even elements : %d ",sum);

    for(i=1; i<n; i++)
    {
        if(i%2!=0)
            even_position=even_position+a[i];
    }
    printf("\nSum of even position elements : %d", even_position);

    return 0;
        
}

