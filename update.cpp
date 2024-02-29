#include<iostream>
using namespace std;

void update(int arr[],int n){
    arr[0]=20;
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
}
int main(){
    int arr[5]={2,4,6,87,8};
    update(arr,5);
}