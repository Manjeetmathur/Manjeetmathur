#include<iostream>
#include<algorithm>
using namespace std;

int minimizeMaxDiff(int heights[],int size,int k)
{
    sort(heights,heights+size);

    int result=heights[size-1]-heights[0];

    int small=heights[0]+k;
    int big=heights[size-1]-k;

    if(small>big)
    {
        swap(small,big);
    }
    for(int i=1;i<size-1;++i)
    {
        int subtract=heights[i]-k;
        int add=heights[i]+k;
        if(subtract>=small || add<=big)
        {
            continue;
        }
        if(big-subtract<=add-small)
        small=subtract;

        else{
            big=add;
        }
    }
    return min(result,big - small);
}

int main()
{
    int n;
    cout<< "Enter the size of array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"original array : \n";
    for(int i=0;i<n ;i++)
    {
        cout<< arr[i]<< " ";
    }

    int k;
    cout<<"\nEnter the value of k : ";

    cin>>k;

    int result=minimizeMaxDiff(arr,n,k);
    cout<< "\nThe minimum maximmum differsence heights after adjustment is : "<<result;
// }
//     if (n == 1) return 1;

//     int low = 0;
//     int high = n - 1;
//     long long sum1 = 0;
//     long long sum2 = 0;

//     while (low <= high) {
//         if (sum1 < sum2) {
//             sum1 += a[low];
//             low++;
//         } else if (sum1 > sum2) {
//             sum2 += a[high];
//             high--;
//         } else {
//             if (low == high) {
//                 return low + 1; 
//             }
//             sum1 += a[low];
//             sum2 += a[high];
//             low++;
//             high--;
     //   }
    // }

    // return -1;
    
    // }

