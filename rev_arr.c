#include<stdio.h>
/*int main()
{
	int i,j,n,a[50],temp;
	printf("Enter number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter the elements in the array: ");
	for(i=0;i<n;i++)         //reading array
	{
		scanf("%d",&a[i]);
	}
	j=n-1;
	for(i=0;i<j;i++,j--)     //reversing array
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;	
	}
	printf("\n The reversed elements in the array are: ");
	for(i=0;i<n;i++)         //printing array
	{
		printf("%d ",a[i]);
	}
	return 0;
}*/
void read_arr(int arr[],int n)
{
	int i;
	printf("Enter the elements in the array: ");
	for(i=0;i<n;i++)         //reading array
	{
		scanf("%d",&arr[i]);
	}
}
void rev_arr(int arr[],int n)
{
	int i,j,t;
	j=n-1;
	for(i=0;i<j;i++,j--)
	{
		t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
	}
}

void print_arr(int arr[],int n)
{
	int i;
	printf("\n The reversed elements in the array are: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
int main()
{
	int i,j,n,arr[50],temp;
	printf("Enter number of elements in the array: ");
	scanf("%d",&n);
	read_arr(arr,n);
	rev_arr(arr,n);
	print_arr(arr,n);
}




