// storage classes
// 1. auto
// 2. static 
// 3. register
// 4. extern
int m;
void f(int x)
{
		auto int i=5;  // default val=unknown
		static int j=5;// default val=0
		register int k=5;// // default val is unknown
		extern int m; // default val 0
		i=i+x;
		j=j+x;
		k=k+x;
		m=m+x;
		printf("\n i = %d",i); //7     8
		printf("\n j = %d",j);//7      10
		printf("\n k = %d",k);//7      8
		printf("\n m = %d",m);//2      5
		printf("\n========================");
}
int main()
{

	f(2);
	f(3);
	return 0;
	
}
