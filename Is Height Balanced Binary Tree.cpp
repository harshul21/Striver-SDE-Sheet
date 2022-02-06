//Problem Link:- https://www.codingninjas.com/codestudio/problems/is-height-balanced-binary-tree_975497?topList=striver-sde-sheet-problems&leftPanelTab=1
/*************************************************************
 
    Following is the Binary Tree node structure

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

*************************************************************/
int height(BinaryTreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int l=height(root->left);
    int r=height(root->right);
    return max(l,r)+1;
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    if(root==NULL or(root->left==NULL and root->right==NULL)){
        return true;
    }
    int l=height(root->left);
    int r=height(root->right);
    if(abs(l-r)<=1 and isBalancedBT(root->left) and isBalancedBT(root->right)){
        return true;
    }
    return false;
}
