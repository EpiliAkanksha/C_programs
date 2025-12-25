#include<stdio.h>
int main() 
{
    int arr[10], i, j, n,k,high,low,found,mid;
    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &n);

    if(n > 10 || n <= 0) 
	{
        printf("Invalid number of elements.\n");
        return 1; 
    }

    
    printf("Enter elements in sorted order for binary search:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
	
	printf("\n Enter search data : ");
	scanf("%d",&k);
	low=0;
	high=n-1;
	found=0;
	while(low <= high)
	{
		mid=(low+high)/2;
		if(k==arr[mid])
		{
			printf("\n Data found at %d",mid);
			found=1;
			break;
		}
		else if( k < arr[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(found==0)
		printf("\n Data not found..");
    return 0;
}

