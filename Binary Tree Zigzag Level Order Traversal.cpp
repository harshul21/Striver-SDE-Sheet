//Problem Statement:- https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/submissions/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        int l=0;
        while(!q.empty()){
            int s=q.size();
            vector<int> v;
            for(int i=0;i<s;i++){
                TreeNode* current=q.front();
                q.pop();
                v.push_back(current->val);
                if(current->left){
                    q.push(current->left);
                }
                if(current->right){
                    q.push(current->right);
                }
            }
            if(l%2==0){
                ans.push_back(v);
            }
            else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            l++;
        }
        return ans;
    }
};
