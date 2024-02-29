#include<iostream>
using namespace std;
int main()
{
    int arr[6]={2,3,45,6,7,9};
    int arr1[5]={1,3,4,5,3};
    for(int i=0;i<5;i+=2)
    {
        if(i+1<5)
        {
            //swap(arr1[i],arr1[i+1]);
            int t=arr1[i];
            arr1[i]=arr1[i+1];
            arr1[i+1]=t;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<" ";

    }
}