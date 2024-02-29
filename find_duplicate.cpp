int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    // int ans=0;
    // for(int i=0;i<arr.size();i++)
    // {
    //     ans=ans^arr[i];
    // }
    // for(int i=1;i<arr.size();i++)
    // {
    //     ans=ans^i;
    // }
    // return ans;
       int findDuplicate(vector<int>& nums) {
         int ans=0;
         sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++)
    {
       if(nums[i]==nums[i+1])
       {
           ans=nums[i];
       }
    }
    return ans;
    }
	
}
//  void sort(long long arr[],int n)
//   {
//       for(int i=1;i<n;i++)
//       {
//        for(int j=0;j<n;j++)
//           {
//               if(arr[j]>arr[j+1])
//               {
//                   swap(arr[j],arr[j+1]);
//               }
//           }
//       }
//   }
    // vector<int> ans;
    //     sort(arr, arr + n);
    //     for (int i = 0; i < n - 1; i++) {
    //         if (arr[i] == arr[i + 1]) {
    //             ans.push_back(arr[i]);
    //             // Skip the duplicates to avoid duplicate entries in the result
    //             while (i < n - 1 && arr[i] == arr[i + 1]) {
    //                 i++;
    //             }
    //         }
    //     }

    //     if (ans.size() == 0) {
    //         return {-1};
    //     }
    //     return ans;
    //  vector<int>v;
        
    //     for(int i=0;i<n;i++){
    //         int num=0;
    //         for(int j=i+1;j<n;j++){
    //             if(a[i]<a[j]){
    //                 num++;
    //                 break;
    //             }
    //         }
    //         if(num==0){
    //             v.push_back(a[i]);
    //         }
    //     }
    //     return v;
    // int majorityElement(int a[], int size)
    // {
        
    //     unordered_map<int,int>m;
    //     for(int i=0;i<size;i++)
    //     m[a[i]]++;
    //     for(auto it:m)
    //     {
    //         if(it.second>size/2)
    //         return it.first;
    //     }
    //     return -1;
    // }