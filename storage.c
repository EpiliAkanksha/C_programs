// storage classes
// 1. auto
// 2. static 
// 3. register
// 4. extern
int m;
int main()
{
	auto int i;  // default val=unknown
	static int j;// default val=0
	register int k;// // default val is unknown
	extern int m; // default val 0
	printf("\n i = %d",i);
	printf("\n j = %d",j);
	printf("\n k = %d",k);
	printf("\n m = %d",m);
	return 0;
	
}
