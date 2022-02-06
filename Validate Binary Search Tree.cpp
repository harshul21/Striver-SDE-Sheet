//Problem Link:- https://leetcode.com/problems/validate-binary-search-tree/
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
    void traverse(TreeNode* root,vector<int> &v)
    {
        if(root==NULL)
        {
            return;
        }
        traverse(root->left,v);
        v.push_back(root->val);
        traverse(root->right,v);
        
    }
    bool isValidBST(TreeNode* root) {
        if(root->left==NULL and root->right==NULL)
        { 
            return true;
        }
        vector<int> v;
        traverse(root,v);
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>=v[i+1])
            {
                return false;
            }
        }
        return true;
        
    }
};
