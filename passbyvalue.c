// PASS BY VALUE OR CALL BY VALUE.
#include<stdio.h>
void f(int i)  //function defination
{
	i=i+3;  // here this i is called formal parameter
	printf("in fucntion f i = %d",i); 
}
int main()
{
	int i=10;  // in calling function this i is called actual parameter
	f(i);     // also known as argument
	// passing R value of i
	printf("\nin main function i =%d",i);
}
