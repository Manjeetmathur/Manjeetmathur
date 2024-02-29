#include <iostream>
#include <vector>
#include<climits>
#include<algorithm>

using namespace std;

int countLessEqual(const vector<vector<int>>& matrix, int mid, int R, int C) {
    int count = 0;
    for (int i = 0; i < R; ++i) {
        // Binary search in each row to count elements less than or equal to mid
        count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
    }
    return count;
}

int median(const vector<vector<int>>& matrix, int R, int C) {
    int low = INT_MAX, high = INT_MIN;

    // Find the minimum and maximum values in the matrix
    for (int i = 0; i < R; ++i) {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][C - 1]);
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int count = countLessEqual(matrix, mid, R, C);

        if (count <= (R * C) / 2) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return low;
}

int main() {
    // Example usage
    vector<vector<int>> matrix = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    int R = matrix.size();
    int C = matrix[0].size();

    int result = median(matrix, R, C);

    cout << "Median: " << result << endl;

    return 0;
}
