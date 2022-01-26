//Problem Statement:-https://www.codingninjas.com/codestudio/problems/merge-intervals_699917?topList=striver-sde-sheet-problems&leftPanelTab=0
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
#include<bits/stdc++.h>
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    if(intervals.size()==0){
        return ans;
    }
    sort(intervals.begin(),intervals.end());
    vector<int> temp=intervals[0];
    for(auto it:intervals){
        if(it[0]<=temp[1]){
            temp[1]=max(it[1],temp[1]);
        }
        else{
            ans.push_back(temp);
            temp=it;
        }
    }
    ans.push_back(temp);
    return ans;
}
