#include<iostream>
using namespace std;
int findMaxMin(int arr[],int n)
{
    int min=0,max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[min])
        {
            min=arr[i];
        }
        if(arr[i]>arr[max])
        {
            max=arr[i];
        }

    }
    cout<<"\nMin of the array : "<<min;
    cout<<"\nMax of the array : "<<max;
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
    int ans=findMaxMin(arr,n);

}