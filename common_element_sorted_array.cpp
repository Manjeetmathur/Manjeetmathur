 
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            std::vector<int> result;

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3) {
        if (A[i] == B[j] && B[j] == C[k]) {
            result.push_back(A[i]);
            int commonElement = A[i];
            
            while(i<n1 && A[i] == commonElement)
            {
                  i++;
            }
              
                
            while(j<n1 && B[j] == commonElement)
            {
                 j++;
            }
               
                
            while(k<n3 && C[k] == commonElement)
            {
                 k++;
            }
               
        }
        else if(A[i] < B[j])
            i++;
        else if(B[j] < C[k])
            j++;
        else
            k++;
    }
       return result;
    }