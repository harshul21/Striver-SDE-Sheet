//Problem Link:-https://www.codingninjas.com/codestudio/problems/tree-traversal_981269?topList=striver-sde-sheet-problems
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/
void inorder(BinaryTreeNode<int>* root,vector<int> &v)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
void preorder(BinaryTreeNode<int>* root,vector<int> &v)
{
    if(root==NULL)
    {
        return;
    }
    v.push_back(root->data);
    inorder(root->left,v);
    inorder(root->right,v);
}
void postorder(BinaryTreeNode<int>* root,vector<int> &v)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,v);
    inorder(root->right,v);
    v.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<vector<int>> ans;
    inorder(root,v1);
    preorder(root,v2);
    postorder(root,v3);
    ans.push_back(v1);
    ans.push_back(v2);
    ans.push_back(v3);
    return ans;
}
