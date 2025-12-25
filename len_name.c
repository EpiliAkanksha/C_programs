#include<stdio.h>
int my_len(char arr[]);
int main()
{
	char arr[30];
	int length;
	printf("enter your name: ");
	scanf("%s",arr);
	length= my_len(arr);

	printf("\n length = %d",length);
	return 0;
}
int my_len(char arr[])
{
	int i;
	for(i=0;arr[i]!='\0';i++)
	{
		;
	}
	return i;
}
