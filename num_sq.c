//n=10
//1 2 3 4 25 36 49 64 81 100
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i<5)
			printf("%d  ",i);
		else
			printf("%d  ",i*i);
	}
	return 0;
}
