//Problem Link:-https://www.codingninjas.com/codestudio/problems/k-th-largest-number_920438?topList=striver-sde-sheet-problems
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

void dfs(TreeNode<int>*root,int k,int &idx,int &m)
{
    if(root==NULL)
    {
        return;
    }
    dfs(root->right,k,idx,m);
    if(++idx==k)
    {
        m=root->data;
        return;
    }
    dfs(root->left,k,idx,m);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
    if(root==NULL)
    {
        return -1;
    }
    int m=-1;
    int idx=0;
    dfs(root,k,idx,m);
    return m;
    
}
