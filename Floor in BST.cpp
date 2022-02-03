//Problem Link:-https://www.codingninjas.com/codestudio/problems/floor-from-bst_920457?topList=striver-sde-sheet-problems&leftPanelTab=1
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int floorInBST(TreeNode<int> * root, int X)
{
    int floor=-1;
    while(root){
        if(root->val==X){
            return X;
        }
        else if(root->val>X){
            root=root->left;
        }
        else{
            floor=root->val;
            root=root->right;
        }
    }
    return floor;
}
