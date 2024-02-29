
class Solution {
public:

    void multiply(vector<int>& result, int num)
    {
        int carry = 0;
        
        for(int i = 0; i<result.size(); ++i)
        {
            int product = result[i]*num + carry;
            result[i] = product%10;
            carry = product/10;
        }
        
        while(carry)
        {
            result.push_back(carry%10);
            carry /= 10;
        }
    }
    vector<int> factorial(int N){
        // code here
        vector<int> result;
        result.push_back(1);
        
        for(int i = 2; i<= N; ++i)
        {
            multiply(result,i);
        }
        reverse(result.begin(), result.end());
        
        return result;