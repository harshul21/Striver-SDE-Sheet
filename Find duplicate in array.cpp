//Problem Link:- https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_1112602?topList=striver-sde-sheet-problems
//Youtube Lin:- https://www.youtube.com/watch?v=32Ll35mhWg0
int findDuplicate(vector<int> &nums, int n){

    int slow=nums[0];
    int fast=nums[0];
    do{
        fast=nums[nums[fast]];
        slow=nums[slow];
    }while(fast!=slow);
    fast=nums[0];
    while(fast!=slow){
        fast=nums[fast];
        slow=nums[slow];
    }
    return slow;
    
}
