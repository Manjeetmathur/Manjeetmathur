#include<iostream>
using namespace std;

void findUnion(int arr1[],int n,int arr2[],int m)
{
    int i=0;int j=0;
    cout<<"\nUnion of the array : ";
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            cout<<arr2[j]<< " ";
            j++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;j++;
        }
    }
    while(i<n)
    {
        cout<<arr1[i]<< " ";
        i++;
    }
    while(j<m)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
    cout<<endl;
}
void findIntersection(int arr1[],int n,int arr2[],int m)
{
    int i=0;int j=0;
    cout<<"\nIntersection of the array : ";
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            j++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;j++;
        }
    }
  
    cout<<endl;
}
int main()
{
    int arr1[]={2,4,6,8,9};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={4,6,7,8,9,10};
    int m=sizeof(arr2)/sizeof(arr2[0]);
    findUnion(arr1,n,arr2,m);
    findIntersection(arr1,n,arr2,m);
}