//Problem Link:-https://www.codingninjas.com/codestudio/problems/pair-sum-in-bst_920493?topList=striver-sde-sheet-problems
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
#include<bits/stdc++.h>
void inorder(BinaryTreeNode<int> *root,vector<int> &v)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    if(root==NULL or(root->left==NULL and root->right==NULL))
    {
        return false;
    }
    vector<int> v;
    inorder(root,v);
    int low=0;
    int high=v.size()-1;
    while(low<high)
    {
        if(v[low]+v[high]==k)
        {
            return true;
        }
        else if(v[low]+v[high]>k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}
