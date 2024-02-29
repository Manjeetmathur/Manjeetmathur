#include<iostream>
using namespace std;

int findPeak(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[6]={1,3,20,1,4,10};

    int peakIndex=findPeak(arr,6);
    cout<<peakIndex;
}