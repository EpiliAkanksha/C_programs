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
	  add 2 numbers using following function defination
	  --------------------------------
	 1) void add(void);
	 2)  int add(void);
	 3)  void add(int a,int b);
	4) int add(int a, int b);
	  
	 Debug : process of finding bugs is known as debugging.      
	      
*/
# include <stdio.h>

int add(int a, int b)// called function
{
	int c; // local variable 
	
	c=a+b;
	
	
	return c;
	
}
int main()// calling function
{	int a,b,c;
	printf("\n enter a and b :");
	scanf("%d%d",&a,&b);	
	c=add(a,b);//calling
	printf("\n sum = %d",c);

	return 0;
}
