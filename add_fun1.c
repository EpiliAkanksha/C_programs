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
	  void add(void);
	  int add(void);
	  void add(int a,int b);
	  int add(int a, int b);
	        
	      
*/
# include <stdio.h>
void add(void)// called function
{
	int a,b,c;
	printf("\n enter a and b :");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\n sum = %d",c);
	return;
	
}
int main()// calling function
{
	add();//calling
	return 0;
}
