#include <stdio.h>

// Function to modify the array (incorrect - pass by value)
void modifyArrayByValue(int arr[5]) 
{
    arr[0] = 10; // This modifies the local copy, not the original array
    printf("Inside modifyArrayByValue: arr[0] = %d\n", arr[0]);
}

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Before modifyArrayByValue: arr[0] = %d\n", arr[0]);
    modifyArrayByValue(arr); // Pass by value (arrays are passed as pointers, but let's consider no actual change here)
    printf("After modifyArrayByValue: arr[0] = %d\n", arr[0]); // No change in 'arr'
    return 0;
}

