 long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    if(m>n) return -1;
    sort(a.begin(),a.end());
    
    long long minDifference = LLONG_MAX;
    
    for(int i=0; i+m-1< n;i++)
    {
        long long currentDifference = a[i+m-1] - a[i];
        minDifference = min(minDifference, currentDifference);
    }
    return minDifference;
    
    }  