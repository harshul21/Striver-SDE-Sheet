//Problem Link:- https://www.codingninjas.com/codestudio/problems/search-in-bst_1402878?topList=striver-sde-sheet-problems&leftPanelTab=1
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
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
*/

bool searchInBST(BinaryTreeNode<int> *root, int k) {
    //Recursive Approach
//     if(root==NULL){
//         return false;
//     }
//     if(root->data==k){
//         return true;
//     }
// //     return searchInBST(root->left,k) or searchInBST(root->right,k);
//     bool l=false;
//     bool r=false;
//     if(root->data<k){
//         l=searchInBST(root->right,k);
//     }
//     r = searchInBST(root->left,k);
//     return l or r;
    //Iterative Approach
    if(root==NULL){
        return false;
    }
    if(root->data==k){
        return true;
    }
    while(root){
        if(root->data==k){
            return true;
        }
        if(root->data<k){
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    return false; 
}
