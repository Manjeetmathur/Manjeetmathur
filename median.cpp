
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    
		    int n=v.size();
		    if(n%2!=0)
		        return v[n/2];
		        
		    else
		    {
		        int middle1 = v[n/2-1];
		        int middle2 = v[n/2];
		        return (middle1 + middle2)/2;
		    }
		}