//find n factorial using 4 ways of function
//funct1: no parameter and no return type
//funct2: with parameter and with return type
//funct3:no parameter with return type
//funct4:with parameter and no return type
int factorial()
{
	int i,f=1,n;
	printf("enter the n value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;	
	}
	
	return f;
}
int main()
{
	int f;
	
	f=factorial();
	printf("the factorial is %d",f);
	return 0;
}
