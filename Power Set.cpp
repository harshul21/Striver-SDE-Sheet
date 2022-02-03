//Problem Link:-https://www.codingninjas.com/codestudio/problems/find-all-subsets_2041970?topList=striver-sde-sheet-problems&leftPanelTab=0
//Youtube Link:-https://www.youtube.com/watch?v=b7AYbpM5YrE
/*
    Time Complexity: O(N*2^N)
    Space Complexity: O(N*2^N)

    where N is the size of given input array.
*/

vector<vector<int>> FindAllSubsets(int n, vector<int> &arr){
    
    // 2D vector to store answer
    vector<vector<int>> ans;
    
    // Temporary vector to store current subset
    vector<int> temp;
    
    
    // Iterating over 1 to 2^N-1
    for(int num = 1; num <= pow(2,n)-1; num++){
        
        // Checking ith bit value of num
        for (int i = 0; i <= n-1; i++){
            
            // If ith bit is ON, adding arr[i] to temporary subset
            if((num & (1 << i)) == (1 << i)){
                temp.push_back(arr[i]);
            }
            
        }
        
        // Adding the temporary subset to answer 
        ans.push_back(temp);
        
        // Resetting temporary subset
        temp.clear();
    }
    
    // Returning the final answer
    return ans;
}
