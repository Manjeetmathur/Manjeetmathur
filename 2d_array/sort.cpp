#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
    // Create a temporary array and copy elements
    vector<int> temp(N * N);
    int index = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            temp[index++] = Mat[i][j];
        }
    }

    // Sort the temporary array
    sort(temp.begin(), temp.end());

    // Traverse the matrix and replace elements with sorted ones
    index = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            Mat[i][j] = temp[index++];
        }
    }

    // Return the sorted matrix
    return Mat;
}

int main() {
    // Example usage
    int N;
    cout << "Enter the size of the matrix (N): ";
    cin >> N;

    vector<vector<int>> Mat(N, vector<int>(N));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> Mat[i][j];
        }
    }

    // Call the function to get the sorted matrix
    vector<vector<int>> sortedMat = sortedMatrix(N, Mat);

    // Display the sorted matrix
    cout << "Sorted Matrix:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << sortedMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
