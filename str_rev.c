#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char arr[50],t;
	printf("Enter a string: ");
	scanf("%s",arr);
	j=strlen(arr)-1;
	for(i=0;i<j;i++,j--)
	{
		t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
	}
	printf("The reversed string is: %s",arr);
	return 0;
}
