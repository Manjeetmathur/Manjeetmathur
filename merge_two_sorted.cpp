#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

void merge(vector<int>& num1 ,int n,vector<int>& num2,int m)
{
    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    while(i>=0 && j>=0)
    {
        if(num1[i]>=num2[j]){
            num1[k--]=num1[i--];
        }
        else{
            num1[k--]=num2[j--];
        }
    }
    while(j>=0)
    {
        num1[k--]=num2[j--];
    }
}
int main()
{
    int n,m;
    cout<< "Enter the size of array : ";
    cin>>n;

    vector<int>num1(n+m);
    for(int i=0;i<n;i++)
    {
        cin>>num1[i];
    }
    
    cout<<"\nEnter the size of num 2: ";
    cin>>m;
    vector<int>num2(m);
    for(int i=0;i<m;i++)
    {
        cin>>num2[i];
    }
    merge(num1,n,num2,m);
     cout<<"\nMerged Array : \n";
    for(int i=0;i<n ;i++)
    {
        cout<<num1[i]<<" ";
    }
    getch();
}