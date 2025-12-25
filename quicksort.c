void swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int partition(int arr[],int low,int high)
{
	int pivot = arr[low];
	int up = low+1;
	int down = high;
	while(1)
	{
		while(up <= high && arr[up] < pivot)
		{
			up++;
		}
		while(arr[down] > pivot)
		{
			down--;
		}
		if(up > down)
		{
			break;
		}
		
		swap(&arr[up], &arr[down]);//
	
	}
	swap(&arr[low], &arr[down]);// swap with pivot
	return down;
	
}
void quicksort(int arr[],int low,int high)
{
	if(low < high)
	{
		int p = partition(arr,low,high);
		quicksort(arr,low,p-1); // left list
		quicksort(arr,p+1,high); // right list
	}
}
int main()
{
	int arr[]={1,2,3,7,6,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int low=0,high=n-1;
	quicksort(arr,low,high);
	printf("Sorted array is : ");
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d ",arr[i]);
		
	}
}
