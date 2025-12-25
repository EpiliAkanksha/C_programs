int main()
{
	int i,j,arr[10][10],r,c;
	printf("\n enter number of rows and coloumns of a matrix: ");
	scanf("%d%d",&r,&c);
	printf("\n enter the elements of the matrix: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n transpose of a matrix: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%4d",arr[j][i]);
		}
		printf("\n");
	}
}
