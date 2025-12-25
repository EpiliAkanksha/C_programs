/*
What is Radix?
--------------------
In number systems, the radix (or base) is the number of unique digits, 
including zero,
 used to represent numbers in a positional numeral system.
 
 Radix Sort groups and processes numbers by each digit's value 
 based on the number's radix (base). 
 So if you're sorting base-10 integers, 
 you look at each digit in its decimal form.
 
 */
#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    do {
        count++;
        num /= 10;
    } while (num > 0);
    return count;
}

void radixSort(int arr[], int n) {
    int i, j, k, max = arr[0];
    int bucket[10][100], bCount[10] = {0};

    // Find max to determine number of digits
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int digits = countDigits(max);

    for (i = 0; i < digits; i++) {
        // Distribute elements into buckets
        for (j = 0; j < n; j++) {
            int digit = (arr[j] / (int)pow(10, i)) % 10;
            bucket[digit][bCount[digit]] = arr[j];
            bCount[digit]++;
        }

        // Collect elements from buckets
        k = 0;
        for (j = 0; j < 10; j++) {
            for (int l = 0; l < bCount[j]; l++) {
                arr[k++] = bucket[j][l];
            }
            bCount[j] = 0;
        }
    }
}

int main() {
    int arr[100], n;

    printf("Enter total numbers to be sorted: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    radixSort(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);

    return 0;
}

