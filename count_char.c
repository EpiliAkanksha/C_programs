//count number of char ch in a given string s
#include<stdio.h>
#include<string.h>
/*int main()
{
	char a[50],ch;
	int i,len,count=0;
	printf("Enter the string: ");
	scanf("%s",a);
	fflush(stdin);
	printf("Enter the character to be counted: ");
	scanf("%c",&ch);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]==ch)
		{
			count++;
		}
	}
	printf("count= %d",count);
}*/
int count_char(char a[],char ch)
{
	int i,len,count=0;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]==ch)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	char a[50],ch,ctr;
	printf("Enter the string: ");
	scanf("%[^\n]s",a);
	fflush(stdin);
	printf("Enter the character to be counted: ");
	scanf("%c",&ch);
	ctr=count_char(a,ch);
	printf("count= %d",ctr);
}
