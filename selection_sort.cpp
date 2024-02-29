#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{  
    // Write your code here.
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
         
        for( int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}
int main()
{
    int i,j,small,tmp,pos;
    int n[]={30,40,50,10,3};
    cout<<"\nBefore sorting : ";
    for(int i=0;i<5;i++)
    {
        cout<<n[i]<<" ";
    }
    for(int i=0;i<5;i++)
    {
       small=n[i];
       pos=i;
       for(j=i+1;j<5;j++)
       {
         if(n[j]<small)
         {
              small=n[j];
              pos=j;
         }
      
       }
       tmp=n[i];
       n[i]=n[pos];
       n[pos]=tmp;

    }
    cout<<"\nAfter bubble sort : ";
      for(int i=0;i<5;i++)
    {
        cout<<n[i]<<" ";
    }
}