//Problem Link:-https://www.codingninjas.com/codestudio/problems/set-matrix-ones_981213?topList=striver-sde-sheet-problems&leftPanelTab=0
//Youtube Link:-https://www.youtube.com/watch?v=M65xBewcqcI
void setMatrixOnes(vector<vector<int>> &mat, int n, int m)
{
  
    // Write your code here.
    int r=mat.size();
    int c=mat[0].size();
    int col0=0;
    for(int i=0;i<r;i++){
        if(mat[i][0]==1){
            col0=1;
        }
        for(int j=1;j<c;j++){
            if(mat[i][j]==1){
                mat[i][0]=1;
                mat[0][j]=1;
            }
        }
    }
    
    for(int i=r-1;i>=0;i--){
        for(int j=c-1;j>=1;j--){
            if(mat[i][0]==1 or mat[0][j]==1){
                mat[i][j]=1;
            }
        }
        if(col0==1){
            mat[i][0]=1;
        }
    }
}
