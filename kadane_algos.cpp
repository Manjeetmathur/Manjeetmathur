
#include<iostream>
#include<climits>
using namespace std;

int kadaneAlgo(int arr[],int size)
{
    int maxEndingHere=arr[0];
    int maxSoFar=arr[0];

    for(int i=0;i<size;i++)
    {
        maxEndingHere=max(arr[i],maxEndingHere+arr[i]);
        maxSoFar=max(maxSoFar,maxEndingHere);
    }
    return maxSoFar;
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
    int maxSum=kadaneAlgo(arr,n);
    cout<< "the maximum sum of subarray is : "<<maxSum;
}