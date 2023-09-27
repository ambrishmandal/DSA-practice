 // Write a program to store random numbers into an array of n integers and then find out the smallest and largest number stored in it.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, smallest, largest;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    srand(time(0));
    for (i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("%d ", arr[i]);
    }

    smallest = largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("\nSmallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);
return 0;
}
