int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int result =arr[n-1]-arr[0];
        
        for(int i=1;i<n;i++)
        {
            int mini = min  + k, arr[i]-k);
            int newMax=max(arr[n-1]-k,arr[i-1]+k);
            
            result = min(result,newMax-mini);
        }
        return result;
        
    }