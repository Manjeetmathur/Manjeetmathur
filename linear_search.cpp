#include<iostream>
#include<conio.h>

using namespace std;

int  main(){
   

    int num[10],i,pos=-1,value;

    cout<< "\nEnter the value of element : \n";
    for(int i=0;i<10;i++)
    {
        cin>>num[i];

    }
    cout<<"\nEnter the number to searched: ";
    cin>>value;

    for(int i=0;i<10;i++){
        if(value==num[i])
        {
            pos=i+1;
            break;
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