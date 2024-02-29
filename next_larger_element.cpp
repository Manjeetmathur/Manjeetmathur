  vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>s;
       // s.push(-1);
        vector<long long> ans(n,-1);
        
        for(int i=n-1;i>=0;i--)
        {
           
            while(!s.empty() && arr[i] >=s.top())
            {
                s.pop();
            }
           if(!s.empty())
            ans[i]=s.top();
            
            s.push(arr[i]);
        }
        return ans;
    }