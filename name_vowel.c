#include<stdio.h>
int main()
{
	char name[20];
	int i=0;
	int vc=0;
	int cc=0;
	printf("enter your name: ");
	scanf("%s",name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
		vc++;
		else
		cc++;
	}
	printf("\n vowels: %d",vc);
	printf("\n consonants: %d",cc);
	return 0;
}
