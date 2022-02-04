//Problem Link:- https://www.codingninjas.com/codestudio/problems/ceil-from-bst_920464?topList=striver-sde-sheet-problems&leftPanelTab=0
 int findCeil(BinaryTreeNode<int> *root, int x){
     int ceil=-1;
     while(root)
     {
         if(root->data==x)
         {
             ceil=root->data;
             return ceil;
         }
         if(root->data>x)
         {
             ceil=root->data;
             root=root->left;
         }
         else
         {
             root=root->right;
         }
     }
     return ceil;

}
