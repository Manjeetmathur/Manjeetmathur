#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sort_0_1_2(int arr[],int n)
{
    int low=0;
    int high=n-1;
    int mid=0;
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            break;

            case 1:
            mid++;
            break;

            case 2: 
            swap(arr[mid],arr[high]);
            high--;
            break;
        }
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
    cout<<"\nAfter sorting : ";
    sort_0_1_2(arr,n);
    printArray(arr,n);
}