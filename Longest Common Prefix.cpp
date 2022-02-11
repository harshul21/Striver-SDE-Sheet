//Problem Link:- https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0){
            return "";
        }
        string s=strs[0];
        int mn=INT_MAX;
        for(int i=1;i<strs.size();i++){
            int j=0;
            int k=0;
            int a=0;
            while(j<s.length() and k<strs[i].length()){
                if(s[j]==strs[i][k]){
                    a++;
                }
                else{
                    break;
                }
                k++;
                j++;
            }
            mn=min(mn,a);
        }
        return s.substr(0,mn);
    }
};
