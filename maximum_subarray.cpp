#include <vector>
#include <deque>
using namespace std;

vector<int> max_of_subarrays(int *arr, int n, int k) {
    vector<int> result;
    deque<int> dq; // Deque to store indices of elements
    
    for (int i = 0; i < n; ++i) {
        // Remove elements from the back of the deque if they are not in the current window
        while (!dq.empty() && dq.front() < i - k + 1) {
            dq.pop_front();
        }
        
        // Remove elements from the back of the deque if they are smaller than or equal to arr[i]
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }
        
        // Add the index i to the back of the deque
        dq.push_back(i);
        
        // If the current index is greater than or equal to k - 1, add the maximum element to the result
        if (i >= k - 1) {
            result.push_back(arr[dq.front()]);
        }
    }
    
    return result;
}
