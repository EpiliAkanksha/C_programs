#include<stdio.h>
int main()
{
	int salvage_value,purchase_price=200,years_service=5,annual_depreciation=30;
	salvage_value=purchase_price-(annual_depreciation*years_service);
	printf("salvage value: %d",salvage_value);
	return 0;
}
