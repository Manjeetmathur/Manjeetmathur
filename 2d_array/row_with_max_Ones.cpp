#include <iostream>
#include <vector>

using namespace std;

int rowWithMax1s(const vector<vector<int>>& arr, int n, int m) {
    int maxOnes = 0;
    int maxRow = -1;

    int i = 0;      // Initialize row index to the first row
    int j = m - 1;  // Initialize column index to the last column

    while (i < n && j >= 0) {
        // If the current element is 1, move to the left in the same row
        if (arr[i][j] == 1) {
            maxOnes = j;   // Update the maximum number of 1's
            maxRow = i;    // Update the row with the maximum number of 1's
            j--;           // Move to the left
        } else {
            i++;           // Move to the next row
        }
    }

    return maxRow;
}

int main() {
    // Example usage
    vector<vector<int>> arr = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    int n = arr.size();
    int m = arr[0].size();

    int result = rowWithMax1s(arr, n, m);

    cout << "Row with the maximum number of 1's: " << result << endl;

    return 0;
}
