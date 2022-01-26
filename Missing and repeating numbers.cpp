//Problem Link:-https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_873366?topList=striver-sde-sheet-problems
//Youtube Link:- Not available But below solution is optimal
#include<bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int a,b;
    for(int i=0;i<n;i++){
        if(arr[abs(arr[i])-1]<0){
            a=abs(arr[i]);
        }
        else{
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            b=i+1;
        }
    }
    pair<int,int> p;
    p.first=b;
    p.second=a;
    
    return p;
}
