// CALL  BY REFERENCE OR PASS BY REFERENCE
// REFERENCE MEANS ADDRESS
#include<stdio.h>
void f(int *p)   // p is a pointer
{
	*p=*p+3;
}
void main()
{
	int i = 10;
	f(&i); // passing L value of i
	printf("in main function value of i is %d",i);
}
