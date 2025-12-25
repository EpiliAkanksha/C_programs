#include<stdio.h>  // printing n alphabets 
/*int main()
{
	int n,i;
	printf("Enter n value: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c ",97+i);  //lower case a starts from 97
	}
	return 0;
}*/
int main()
{
	int n,i,base;
	char ch;
	printf("Enter n value: ");
	scanf("%d",&n);
	printf("\n Enter your choice(l / u): ");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='l'|| ch=='L')
	{
		base=96;
	}
	else if(ch=='u'|| ch=='U')
	{
		base=64;
	}
	for(i=1;i<=n;i++)
	{
		printf("%c ",base+i);
	}
	return 0;
}
