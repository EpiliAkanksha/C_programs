// swapping two numbers using pass by reference mechanism
#include<stdio.h>
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main()
{
	int a=10,b=15;
	printf("Before swapping a = %d , b = %d",a,b);
	swap(&a,&b);   // passing L value of a and b
	printf("\nAfter swapping a = %d , b = %d",a,b);
	return 0;
}
