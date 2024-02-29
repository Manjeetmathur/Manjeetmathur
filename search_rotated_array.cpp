
int getPivot(vector<int>&arr,int n){
    int start=0;int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{

            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return end;
}

int binarySearch(vector<int>&arr,int s,int e,int k)
{
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<end)
    {
       
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(k<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=getPivot(arr, n);
    if(k>=arr[pivot] && k<=arr[n-1])
    {
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
    
}
