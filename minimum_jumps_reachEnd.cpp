#include<climits>
#include<iostream>
using namespace std;

int minJumps(int arr[],int size)
{
    if(size<=1)
    {
        return 0;
    }
    if(arr[0]==0)
    return -1;

    int maxReach=arr[0];
    int steps=arr[0];
    int jumps=1;

    for(int i=1;i<size ;i++)
    {
        if(i==size-1)
        {
            return jumps;
        }
        maxReach=max(maxReach,i+arr[i]);
   
           steps--;

        if(steps==0)
        {
           jumps++;
      
        if(i>=maxReach)
        {
            return -1;
        }
        steps=maxReach-1;
        }
    }
    return -1;

    // int minJumps(int arr[], int n){
    //     // Your code here
    //     int maxi=0,maxrange=0,jump=0;
    //     if(n==1)
    //         return 0;
    //     if(arr[0] == 0)
    //         return -1;
            
    //     for(int i=0;i<n;i++)
    //     {
    //         maxi=max(maxi,i+arr[i]);
    //         if(maxrange==i)
    //         {
    //             maxrange=maxi;
    //             jump++;
    //             if(maxrange>=n-1)
    //             {
    //                 return jump;
    //             }
    //         }
    //     }
    //     return -1;
    // }
}
int main()
{
    int n;
    cout<< "Enter the size of array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"original array : \n";
    for(int i=0;i<n ;i++)
    {
        cout<< arr[i]<< " ";
    }
    int minJumpstoEnd=minJumps(arr,n);
    if(minJumpstoEnd!=-1)
    {
        cout<< "\nMinimum number of jumps needed to reach the end : "<< minJumpstoEnd;
    }
    else{
        cout<<"\nnot possible to rach the end : ";
    }
}