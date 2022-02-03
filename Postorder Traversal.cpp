//Problem Link:-https://www.codingninjas.com/codestudio/problems/name_2035933?topList=striver-sde-sheet-problems
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
void postorder(TreeNode* root,vector<int> &v)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left,v);
    postorder(root->right,v);
    v.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode* root)
{
    // Write your code here	
    vector<int> v;
    if(root==NULL)
    {
        return v;
    }
    postorder(root,v);
    return v;
}
