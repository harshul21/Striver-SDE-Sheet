//Problem Link:-https://www.codingninjas.com/codestudio/problems/print-all-subsets_2041995?topList=striver-sde-sheet-problems&leftPanelTab=0
//Youtube Link:-https://www.youtube.com/watch?v=AxNNVECce8c&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=6
void dfs(int idx, vector<int> ds,vector<int> arr){
    if(idx==arr.size()){
        if(ds.size()!=0){
            for(int i=0;i<ds.size();i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[idx]);
    dfs(idx+1,ds,arr);
    ds.pop_back();
    
    dfs(idx+1,ds,arr);
}
void printAllSubsets(int n, vector<int> &arr){
    vector<int> ds;
    dfs(0,ds,arr);
}
