#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int i,j,small,tmp,pos;
    int n[]={30,40,50,10,3};
    cout<<"\nBefore sorting : ";
    for(int i=0;i<5;i++)
    {
        cout<<n[i]<<" ";
    }
    n[0]=INT_MIN;
    for(i=1;i<=5;i++)
    {
        tmp=n[i];
        j=i-1;
        while(tmp<n[j])
        {
            n[j+1]=n[j];
            j--;
        }
        n[j+1]=tmp;
    }
    cout<<"\nAfter bubble sort : ";
      for(int i=0;i<5;i++)
    {
        cout<<n[i]<<" ";
    }
}