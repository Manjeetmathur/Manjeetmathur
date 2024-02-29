 int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int> uniqueElements;
      
      for(int i=0;i<N;i++)
      {
          uniqueElements.insert(arr[i]);
      }
      int longestStreak = 0;
      
      for(int i=0; i<N ;i++)
      {
          if(uniqueElements.find(arr[i] - 1) == uniqueElements.end())
          {
              int currentNum = arr[i];
              int currentStreak = 1;
              
              while(uniqueElements.find(currentNum+1) != uniqueElements.end())
              {
                  currentNum += 1;
                  currentStreak += 1;
              }
              longestStreak = max(longestStreak,currentStreak);
          }
      }
      return longestStreak;
    }