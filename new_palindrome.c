#include<stdio.h>
#include<string.h>
/*int main()              //palindrome without function
{
	int i,j;
	char a[50];
	printf("Enter a word: ");
	scanf("%s",a);
	j=strlen(a)-1;
	for(i=0;i<j;i++,j--)
	{
		if(a[i]!=a[j])
		break;
	}
	if(i>=j)
	{
		printf("It ia a palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
	return 0;
}*/
void palindrome(char a[]) ;   //fucntion prototype
int main()
{
	char a[50];
	printf("Enter a word: ");
	scanf("%s",a);
	palindrome(a);
}
void palindrome(char a[])         //palindrome with function
{
	int i,j;
	j=strlen(a)-1;
	for(i=0;i<j;i++,j--)
	{
		if(a[i]!=a[j])
		break;
	}
	if(i>=j)
	{
		printf("It is a palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
}
