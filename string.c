#include<stdio.h>
int main()
{
	char arr1[100]="priya",arr2[100]="patro",arr3[100];
	int i,j,k=0;
	for(i=0;arr1[i]!='\0';i++)
	{
		arr3[k]=arr1[i];
		k++;
	
	}
	arr3[k]=' ';
	k++;
	for(j=0;arr2[j]!='\0';j++)
	{
		arr3[k]=arr2[j];
		k++;
	}
	arr3[k]='\0';
	printf("%s",arr3);
	return 0;
}
