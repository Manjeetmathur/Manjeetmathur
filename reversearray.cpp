#include<iostream>
using namespace std;

int  reverse(int arr[],int n)
{
    // int j;
    // for(j=n-1;j>=0;j--)
    // {
    //     cout<<arr[j]<<" ";
    // }
    //----------------------------------------1
    // int start=0;
    // int end=n-1;
    // while(start<end)
    // {
    //     int temp=arr[start];
    //     arr[start]=arr[end];
    //     arr[end]=temp;
    //     start++;
    //     end--;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    //-----------------------------------------------2
    // int start=0;
    // int end=n-1;
    // while(start<end)
    // {
    //     swap(arr[start],arr[end]);
    //    start++;
    //    end--;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
//---------------------------------------------3
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
    cout<< "\nAfter the reverse of the array : \n";
    int ans=reverse(arr,n);
    
  

}