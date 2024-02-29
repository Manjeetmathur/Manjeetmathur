string isSubset(int a1[], int a2[], int n, int m) {
     unordered_map<int, int> frequency;

    // Count the frequency of each element in the first array
    for (int i = 0; i < n; i++) {
        frequency[a1[i]]++;
    }

    // Check if all elements of the second array are present with the same or higher frequency
    for (int i = 0; i < m; i++) {
        if (frequency.find(a2[i]) == frequency.end() || frequency[a2[i]] == 0) {
            return "No";  // Element not found or frequency exhausted
        }
        frequency[a2[i]]--;
    }

    return "Yes";
}