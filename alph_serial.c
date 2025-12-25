//print alphbetic serial number
#include<stdio.h>
#include<ctype.h>
int main()
{
	char alph;
	printf("Enter alphabet: ");
	scanf("%c",&alph);
	alph = toupper(alph);
	printf("\n Alphabetic serial number :%d",alph-64);
}
