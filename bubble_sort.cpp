#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
}

int main()
{
    int i,j;
    int n[]={30,40,50,10,3};
    cout<<"\nBefore sorting : ";
    for(int i=0;i<5;i++)
    {
        cout<<n[i]<<" ";
    }
    for(int i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(n[j]>n[j+1])
            {
                int t=n[j];
                n[j]=n[j+1];
                n[j+1]=t;
            }
        }
    }
    cout<<"\nAfter bubble sort : ";
      for(int i=0;i<5;i++)
    {
        cout<<n[i]<<" ";
    }
}