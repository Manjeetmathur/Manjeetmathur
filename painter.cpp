bool isPossible(vector<int>boards,int n,int k,int mid)
{
    int count=1;
    int mini=0;
    n=boards.size();
    for(int i=0;i<n;i++)
    {
        if(mini+boards[i]<=mid){
            mini+=boards[i];
        }
        else{
            count++;
            if(count>k || boards[i]>mid){
                return false;
            }
            mini=boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int s=0;
    int sum=0;
    int n=boards.size();
    for(int i=0;i<n;i++)
    {
        sum=sum+boards[i];

    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(isPossible(boards,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}