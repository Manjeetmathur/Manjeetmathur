 public:
    long long trappingWater(int arr[], int n){
        // code here
        int left = 0, right=n-1;
        
        int maxLeft=0;
        int maxRight = 0;
        long long trappedWater = 0;
        while(left <= right)
        {
            maxLeft = max (maxLeft,arr[left]);
            maxRight = max(maxRight,arr[right]);
            
            if(arr[left] < arr[right])
            {
                trappedWater += max(0,min(maxLeft,maxRight)- arr[left]);
                left++;
            }
            else
            {
                trappedWater += max(0,min(maxLeft,maxRight) - arr[right]);
                right--;
            }
        }
        return trappedWater;
    }