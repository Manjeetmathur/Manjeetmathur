#include<iostream>
#include<climits>

using namespace std;

int maxSubArraySum(int arr[],int size)
{
    int maxEndHere=0;
    int maxSoFar=INT_MIN;

    for(int i=0;i<size;++i)
    {
        maxEndHere=maxEndHere+arr[i];

        //UPDATE MAXSOFAR IF MAXENDHERE BECOMES GREATER

        if(maxSoFar<maxEndHere)
        {
            maxSoFar=maxEndHere;
        } 

        //IF MAXENDHERE IS NEGATIVE , RESET IT TO ZERO

        if(maxEndHere<0)
        {
            maxEndHere=0;
        }

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

    int maxSum=maxSubArraySum(arr,n);
    cout<< "\n\nThe largest sum contiguous subarray is : "<<maxSum<<endl;

    return 0;
}
