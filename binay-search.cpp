#include<iostream>
using namespace std;

int main()
{
    int num[15],i,beg,end,mid,pos=-1,value;
    cout<<"\nEnter the element in ascending order: ";
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }
    cout<<"\n Enter the value of element : ";
    cin>>value;
     beg=0;
     end=5-1;
    while(beg<=end){
        mid=(beg+end)/2;
        if(value==num[mid]){
            pos=mid+1;
            break;
        }
        else if(value<num[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
       if(pos==-1)
    {
        cout<<"\nthe element is not found\n";
    }
    else{
        cout<<"\nthe element is found at position "<<pos;
    }
}