/*Given n stairs, count the number of distinct ways to reach the top.
At each step, the person can climb either 1 stair or 2 stairs.

input : n=3
output: 3
input: n=4
output:5

This is just like the Fibonacci sequence, where:

ways(0) = 1 (1 way to stay at the ground)

ways(1) = 1 (1 way to take a single step)

**fib(n) = fib(n-1)+fib(n-2)**
*/
#include<stdio.h>
int main()
{
	int step[100],i,n;
	printf("enter no.stairs: ");
	scanf("%d",&n);
	step[0]=0;
	step[1]=1;
	step[2]=2;
	
	for(i=3;i<=n;i++)
	{
		step[i]=step[i-1]+step[i-2];
	}
	printf("The no. of ways to reach top is: %d",step[n]);

	
	return 0;
}
