//Problem Link:-https://www.codingninjas.com/codestudio/problems/preorder-traversal_2035934?topList=striver-sde-sheet-problems&leftPanelTab=0

/*
Following is the structure of Tree Node

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/
void preorder(TreeNode* root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    ans.push_back(root->val);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
vector<int> preorderTraversal(TreeNode* root)
{
    // Write your code here	
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    preorder(root,ans);
    return ans;
}
