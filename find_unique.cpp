#include<iostream>
using namespace std;
int findDuplicate(int *arr,int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[6]={2,4,4,6,6,4};
    int ans=findDuplicate(arr,6);
    cout<<ans;
}