    long long mergeAndCountInversions(long long arr[], long long N, int low ,int mid,int high)
    {
        long long n1 = mid -low +1;
        long long n2 = high - mid;
        
        vector<long long> left(n1),right(n2);
        
        for(int i=0;i<n1;i++)
        {
            left[i]=arr[low+i];
        }
        for(int j=0;j<n2;j++)
        {
            right[j]= arr [mid+1+j];
        }
        
        long long inversion =0;
        int i=0,j=0,k=low;
        
        while(i<n1 && j<n2)
        {
            if(left[i] <= right[j])
                arr[k++] = left[i++];
            else
            {
                arr[k++]=right[j++];
                inversion += (n1 - i);
            }
        }
        while(i<n1)
        {
             arr[k++] = left[i++];
        }
        while(j<n2)
        {
            arr[k++]=right[j++];
        }
        return inversion;
    }
    long long mergeSortAndCountInversions(long long arr[], long long N,int low,int high)
    {
        long long inversion = 0;
        if(low < high)
        {
            int mid=low+(high-low)/2;
            
            inversion += mergeSortAndCountInversions(arr,N,low,mid);
            inversion += mergeSortAndCountInversions(arr,N,mid+1,high);
            inversion += mergeAndCountInversions(arr,N,low,mid,high);
            
        }
        return inversion;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergeSortAndCountInversions(arr,N,0,N-1);
    }