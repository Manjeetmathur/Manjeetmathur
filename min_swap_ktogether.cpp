#include <iostream>
#include <vector>

using namespace std;

void minSwapsAndKTogether(vector<int>& arr, int n, int k) {
    int countK = 0;
    int badCount = 0;

    // Count the elements less than or equal to k
    for (int i = 0; i < n; ++i) {
        if (arr[i] <= k) {
            countK++;
        }
    }

    // Count the elements greater than k in the initial window
    for (int i = 0; i < countK; ++i) {
        if (arr[i] > k) {
            badCount++;
        }
    }

    // Initialize the minimum swaps needed
    int minSwaps = badCount;

    // Iterate through the remaining windows
    for (int i = 0, j = countK; j < n; ++i, ++j) {
        if (arr[i] > k) {
            badCount--;
        }
        if (arr[j] > k) {
            badCount++;
        }

        // Update the minimum swaps needed
        minSwaps = min(minSwaps, badCount);
    }

    cout << "Minimum swaps needed: " << minSwaps << endl;
}

int main() {
    // Example usage
    vector<int> arr = {2, 1, 5, 6, 3};
    int n = arr.size();
    int k = 3;

    minSwapsAndKTogether(arr, n, k);

    return 0;
}
