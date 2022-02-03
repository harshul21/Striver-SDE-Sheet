//Problem Link:-https://www.codingninjas.com/codestudio/problems/left-view-of-a-binary-tree_920519?topList=striver-sde-sheet-problems&leftPanelTab=0
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

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
            TreeNode<int>* curr=q.front();
            q.pop();
            if(i==s-1){
                ans.push_back(curr->data);
            }
            if(curr->right){
                q.push(curr->right);
            }
            if(curr->left){
                q.push(curr->left);
            }
        }
    }
    return ans;
}
