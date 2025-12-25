// arr[]={-2,3,4,5,0,1,2,-9,5,0,21,0,-32,0}
//count[]={0,0,0}
int main()
{
	int arr[]={-2,3,4,5,0,1,2,-9,5,0,21,0,-32,0};
	int count[3]={0,0,0},n=14,i;
	for(i=0; i < n;i++)
	{
		if(arr[i]< 0)
		{
			count[0]++;
			
		}
		else if(arr[i]==0)
		{
			count[1]++;
		}
		else
		{
			count[2]++;
		}
	}
	printf("\n No of -ve = %d",count[0]);
	printf("\n No of zeros = %d",count[1]);
	printf("\n No of +ve = %d",count[2]);
	
}
