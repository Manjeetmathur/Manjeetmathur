#include<iostream>
using namespace std;

int sortNegative(int arr[],int n)
{
    int left=0;
    int right=n-1;

    while(left<=right)
    {
        //IF BOTH ELEMENTS ARE NEGATIVE
        if(arr[left]<0 && arr[right]<0)
        {
            left++;
        }
        //IF LEFT ARE POSITIVE AND RIGHT ARE NEGATIVE
        else if(arr[left]>0 && arr[right]<0)
        {
            swap(arr[left],arr[right]);
            left++;right--;
        }
        //IF LEFT ARE NEGATIVE AND RIGHT ARE POSITIVE
        else{
            left++;
            right--;
        }
        // if(arr[left]<0)
        //     left++;

        // else if(arr[right]>=0)
        //     right--;
        // else
        //     {
        //         swap(arr[left],arr[right]);
        //     }
    }
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
    cout<<"\nafter sorting : ";
    int ans=sortNegative(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<< " ";
    }
}