//Problem Link:-https://www.codingninjas.com/codestudio/problems/0-1-knapsack_1072980?topList=striver-sde-sheet-problems&leftPanelTab=0
int maxProfit(vector<int> &values, vector<int> &weights, int n, int W)
{
	int dp[n+1][W+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0 or j==0){
                dp[i][j]=0;
            }
            else if(weights[i-1]<=j){
                dp[i][j]=max(values[i-1]+dp[i-1][j-weights[i-1]],dp[i-1][j]);
             
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}
