 bool subArrayExists(int arr[], int n)
    {
          unordered_set<int> preFixSumSet;
          int currSum=0;
          
          for(int i=0;i<n ;i++)
          {
              currSum += arr[i];
              
              if(currSum == 0 || preFixSumSet.find(currSum) != preFixSumSet.end())
                return true;
                
            preFixSumSet.insert(currSum);
          }
          return false;
    }
    