#include<stdio.h>
int main()
{
	int i=0;
	printf("\n upper case and lower case: ");
	for(i='A';i<='Z';i++)
	{
		printf("\n%c %d %c %d",i,i,i+32,i+32);
	}
	
	return 0;
}
