int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int, int> freq;
        
        for(int i=0;i<n;++i)
        {
            int complement = k- arr[i];
            freq[arr[i]]++;
        }
        int count=0;
        
        for(int i=0;i<n;++i)
        {
            int complement = k - arr[i];
            count += freq[complement];
            
            if(complement == arr[i])
                count--;
                
            
        }
        return count/2;
       
    }