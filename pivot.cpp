#include<iostream>
using namespace std;

int getPivot(int arr[],int n)
{
    int s=0;
    int end=n-1;
    int mid=s+(end-s)/2;
    while(s<end){
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            end=mid-1;
        }
       mid=s+(end-s)/2;
    }
    return s;
}
int main()
{
    int arr[5]={4,5,1,3,6};
    cout<<getPivot(arr,5);
    return 0;
}