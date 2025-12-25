#include<stdio.h>
#include<string.h>
int main()
{
	char arr[30],name[30];
	int len,j;
	printf("enter your name: ");
	scanf("%s",arr);
	len=strlen(arr);
	printf("Number of characters in my name: %d",len);
	printf("\nmy name is %s",arr);
	printf("\n reverse of my name : ");
	for(j=len-1;j>=0;j--)
	
	{
		printf("%c",arr[j]);
	}
	printf("\nenter 2nd name: ");
	scanf("%s",name);
	strrev(name);
	printf("\n reverse name: %s",name);
	return 0;
}
