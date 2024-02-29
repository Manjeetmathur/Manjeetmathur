#include<iostream>

using namespace std;

void  merge(int arr1[],int n,int arr2[],int m,int arr[]){
    int i=0,k=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr[k++]=arr1[i++];
        }
        else{
            arr[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr[k++]=arr1[i++];
    }
    while(j<m){
        arr[k++]=arr2[j++];
    }
}
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[3]={2,4,6};
    int arr[8]={0};

    merge(arr1,5,arr2,3,arr);

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }


}