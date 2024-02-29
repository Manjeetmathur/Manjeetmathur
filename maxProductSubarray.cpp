	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    
	    long long  maxEnd=arr[0];
	   long long  minEnd=arr[0];
	  long long  maxPro=arr[0];
	    
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i] < 0)
	            swap(maxEnd,minEnd);
	            
	        maxEnd = max(static_cast<long long>(arr[i]), maxEnd*arr[i]);
	        minEnd = min(static_cast<long long>(arr[i]), minEnd*arr[i]);
	        
	        maxPro = max(maxPro,maxEnd);
	    }
	    return maxPro;
	}