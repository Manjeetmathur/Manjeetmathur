#include <iostream>
#include <vector>
#include <algorithm>
#include<string.h>

using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    string strNum = to_string(num);
    string reversedStrNum = strNum;
    reverse(reversedStrNum.begin(), reversedStrNum.end());
    return strNum == reversedStrNum;
}

// Function to check if the array is a Palindromic Array
int PalinArray(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (!isPalindrome(a[i])) {
            return 0; // Not a Palindromic Array
        }
    }
    return 1; // Palindromic Array
}

// Example usage
int main() {
    int arr1[] = {121, 131, 141};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << PalinArray(arr1, size1) << endl; // Output: 1 (Palindromic Array)

    int arr2[] = {123, 232, 343};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << PalinArray(arr2, size2) << endl; // Output: 0 (Not Palindromic Array)

    return 0;
}
