#include<stdio.h>
int main()
{
	signed int a;
	unsigned int b;
	short int x;
	long int y;
	printf("int needs %d bytes\n",sizeof(int));
	printf("short int needs %d bytes\n",sizeof(x));
	printf("long int needs %d bytes\n",sizeof(y));
	printf("signed int needs %d bytes\n",sizeof(a));
	printf("unsigned int needs %d bytes\n",sizeof(b));
	return 0;
}
