//title of program
//program to copy the elements of array 1 to array 2
//header file
#include <stdio.h>
//main function heading
int main() {
    // Define the original array a1
    int a1[] = {23, 56, 78, 99, 105};

    // Determine the size of a1
    int n = sizeof(a1) / sizeof(a1[0]);
    
    // Create an empty array a2 with the same size as a1
    int a2[n];
    
    // Copy the elements from a1 to a2
    for (int i = 0; i < n; i++) {
        a2[i] = a1[i];
    }
    
    // Print the copied array a2
    printf("a1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a1[i]);
    }
    printf("\n");
    
    printf("a2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a2[i]);
    }
    printf("\n");
//return statement
    return 0;
}