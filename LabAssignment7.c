
#include <stdio.h>

void bubbleSortAndTrackSwaps(int arr[], int size) {
    int swaps[size]; // Track swaps for each element
    for (int i = 0; i < size; i++) {
        swaps[i] = 0; // Initialize swap counts to 0
    }
    
    int totalSwaps = 0; // Track total number of swaps
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                // Update swap counts
                swaps[j]++;
                swaps[j + 1]++;
                totalSwaps++;
            }
        }
    }
    
    // Print swaps for each element
    for (int i = 0; i < size; i++) {
        printf("%d: # of times %d is swapped\n", arr[i], swaps[i]);
    }
    // Print total swaps
    printf("total # of swaps: %d\n\n", totalSwaps);
}

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);

    printf("array1:\n");
    bubbleSortAndTrackSwaps(array1, n1);

    printf("array2:\n");
    bubbleSortAndTrackSwaps(array2, n2);

    return 0;
}