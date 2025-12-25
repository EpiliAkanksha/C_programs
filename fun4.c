//convert dollar to rupees
//1$=83.75rs
//function with  parameter and no return type
//user defined function
#include <stdio.h>
void  dol_rup(int d)
{	
	float rupees;
	printf("\n dollar = %d",d);
	rupees=83.75*d;
	printf("\nthe money in rupees : %.2f",rupees);
}
int main()// calling function
{
	int d;
	float r;
	printf("enter the money in dollars: ");
	scanf("%d",&d);
	dol_rup(d);
	
	return 0;
}
/*
	function:
	      it is a group of statements , which performs a specific task.
	      it may take 0 or more inputs ( arguments/parameters)
	      it may return either 0 or 1 value.
	      
	      function can be written in 4 ways.
	      a)  function without parameter and without return type.
	              void f(void)
	      b)  function without parameter and with return type.
	              datatype f(void)
	    c)  function with parameter and without return type.
	              void f(parameter)
	    d)  function with parameter and with return type.
	              return type f(parameter)
	              
	Example:
	  add 2 numbers using function
	  --------------------------------
	  void add(void);
	  int add(void);
	  void add(int a,int b);
	  int add(int a, int b);
	        
	      
*/


