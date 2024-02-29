
    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int start = 0;
        int end = 0;
        int currentSum= 0 ;
        int minLength= INT_MAX;
        
        while(end<n)
        {
            currentSum += arr[end];
            
            while(currentSum>x)
            {
                minLength = min(minLength,end-start+1);
                currentSum -= arr[start];
                start += 1;
            }
            end += 1;
        }
        return (minLength == INT_MAX)?0:minLength;
    }