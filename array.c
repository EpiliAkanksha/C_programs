#include<stdio.h>
int n;
void print_arr(int arr[])
{	
	int i;

	for(i=0;i<n;i++)
	{
		printf("%4d",arr[i]);
	}
}
void insertElement(int arr[])
{
	int pos,data,i;
	printf("Enter the position: ");
	scanf("%d",&pos);
	printf("\n Enter the data to be inserted: ");
	scanf("%d",&data);
	for(i=n;i!=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=data;
	n=n+1;
	printf("the new array is: ");
	print_arr(arr);
	
}
void deleteElement(int arr[])
{
	int pos,i;
	printf("Enter the position: ");
	scanf("%d",&pos);
	for(i=pos;i>n;i++)
	{
		arr[i]=arr[i+1];
	}
	n=n-1;
	printf("After deletion of data , the new array is: ");
	print_arr(arr);
}
void searchElement(int arr[])
{
	int i,data,flag=0;
	printf("Enter data to be searched: ");
	scanf("%d",&data);
	for(i=0;i<n;i++)
	{
		if(arr[i]==data)
		{
			flag=1;
			printf("%d is present at index %d",data,i);
			break;
		}
	}
	if(flag==0)
	{
		printf("\n Data not found");
	}
		
}
void sortArray(int arr[])
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	printf("\nThe sorted elements are: ");
	print_arr(arr);
}
void maxMin(int arr[])
{
	int i,min,max;
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\n Minimun value is %d",min);
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\n Maximum value is %d",max);
}
int main()
{
	int arr[50],i,choice;
	printf("enter size of array: ");
	scanf("%d",&n);
	printf("enter elements in the array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("elements in the array are: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nplease enter you choice \n 1- insert element \n 2- delete element from array \n 3- search element in array \n 4- sort array \n 5- find max&min value\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: insertElement(arr);
		break;
		case 2: deleteElement(arr);
		break;
		case 3: searchElement(arr);
		break;
		case 4: sortArray(arr);
		break;
		case 5: maxMin(arr);
		break;
		default: printf("invalid choice");
		break; 
	}
	
	return 0;
}
