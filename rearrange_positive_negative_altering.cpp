#include <iostream>

// Function to rearrange array in alternating positive & negative items
void rearrangeArray(int arr[], int n) {
    int i = -1;

    // Segregate positive and negative numbers using the partition process
    for (int j = 0; j < n; j++) {
        if (arr[j] < 0) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    int posStart = i + 1;
    int negStart = 0;

    // Rearrange alternately
    while (posStart < n && negStart < posStart && arr[negStart] < 0) {
        std::swap(arr[negStart], arr[posStart]);
        posStart++;
        negStart += 2;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Main function for testing
int main() {
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, n);

    rearrangeArray(arr, n);

    std::cout << "Rearranged array: ";
    printArray(arr, n);

    return 0;
}
