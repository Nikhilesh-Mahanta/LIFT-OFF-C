#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, total_words = 1;
 
  	printf("Please Enter any String :  \n");
  	gets(str);
  	 	   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			total_words++;	
		} 
	}	
	printf("Total Number of Words in this String = %d",total_words);
	
  	return 0;
}