//Problem Link:- https://www.codingninjas.com/codestudio/problems/next-permutaion_893046?topList=striver-sde-sheet-problems&leftPanelTab=1
//Youtube Link:- https://www.youtube.com/watch?v=LuLCLgMElus&t=307s
#include<bits/stdc++.h>
vector<int> nextPermutation(vector<int> &nums, int n)
{
    int k;
    for(k=n-2;k>=0;k--){
        if(nums[k]<nums[k+1]){
            break;
        }
    }
    if(k<0){
        reverse(nums.begin(),nums.end());
    }
    else{
        int l;
        for(l=n-1;l>k;l--){
            if(nums[l]>nums[k]){
                break;
            }
        }
        swap(nums[k],nums[l]);
        reverse(nums.begin()+k+1,nums.end());
    }
    return nums;
}
