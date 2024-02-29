#include <vector>
using namespace std;

vector<vector<int>> stockBuySell(vector<int> A, int n) {
    vector<vector<int>> result;
    
    int buy = 0, sell = 0;
    for (int i = 1; i < n; ++i) {
        if (A[i] > A[i - 1]) {
            sell = i;
        } else {
            if (sell > buy) {
                result.push_back({buy, sell});
            }
            buy = i;
            sell = i;
        }
    }
    
    if (sell > buy) {
        result.push_back({buy, sell});
    }
    
    return result;
}
