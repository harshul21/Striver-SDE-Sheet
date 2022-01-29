//Youtube Link:-https://leetcode.com/problems/largest-rectangle-in-histogram/
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        int leftSmall[n],rightSmall[n];
        for(int i=0;i<n;i++){
            while(!st.empty() and heights[st.top()]>=heights[i]){
                st.pop();
            }
            
            if(!st.empty()){
                leftSmall[i]=st.top()+1;
            }
            else{
                leftSmall[i]=0;
            }
            st.push(i);
        }
        
        while(!st.empty()){
            st.pop();
        }
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and heights[st.top()]>=heights[i]){
                st.pop();
            }
            
            if(!st.empty()){
                rightSmall[i]=st.top()-1;
            }
            else{
                rightSmall[i]=n-1;
            }
            st.push(i);
        }
        
        int maxA=0;
        for(int i=0;i<n;i++){
            maxA=max(maxA,heights[i]*(rightSmall[i]-leftSmall[i]+1));
        }
        
        return maxA;
    }
};
