//Problem Link:-https://www.codingninjas.com/codestudio/problems/kth-smallest-node-in-bst_920441?topList=striver-sde-sheet-problems&leftPanelTab=1
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void dfs(TreeNode<int> *root,int k,int &idx,int &ans){
    if(root==NULL){
        return;
    }
    dfs(root->left,k,idx,ans);
    if(++idx==k){
        ans=root->data;
        return;
    }
    dfs(root->right,k,idx,ans);
}
int kthSmallest(TreeNode<int> *root, int k)
{
    int ans=-1;
    int idx=0;
	dfs(root,k,idx,ans);
    return ans;
}
