#include<iostream>
using namespace std;

bool IsPresent(int arr[][3],int target)
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
              return 1;
            }
        }
    }
    return 0;
   
}
int main(){
    int arr[3][3];
    int sum=0;
    cout<<"Enter the element : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
            
        }
       
        cout<<endl;
        
    }
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
            sum+=arr[j][i];
             
        }cout<<sum <<endl;
      
       
    }
       cout<<sum <<endl;
      if( IsPresent(arr,0)){
         cout<< "\n Present \n";
      }else{
         cout<< "\nNot Present \n";
      }
}
