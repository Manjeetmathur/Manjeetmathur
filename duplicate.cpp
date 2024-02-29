#include<iostream>
#include<vector>

using namespace std;

int findDuplicate(vector<int>& num)
{
    int slow=num[0];
    int fast=num[0];

    //MOVE SLOW BY ONE STEP AND FAST BY TWO STEPS UNTILL THEY MEEET

    do{
        slow =num[slow];
        fast=num[num[fast]];

    }
    while(slow!=fast);
    slow=num[0];

    while(slow!=fast)
    {
        slow=num[slow];
        fast=num[fast];

    }
    return slow;
}



int main()
{
    int n;
    cout<< "Enter the size of array : ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"original array : \n";
    for(int i=0;i<n ;i++)
    {
        cout<< arr[i]<< " ";
    }

    int duplicate=findDuplicate(arr);
    cout<<"\nduplicate element in the array: "<<duplicate;

    return 0;
}