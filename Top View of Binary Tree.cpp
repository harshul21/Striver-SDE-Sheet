//Problem Link:- https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1/#
//Structure of binary tree
/*struct Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
// function should print the topView of the binary tree
vector<int> topView(struct Node *root)
{
    vector<int> v;
    map<int,int> m;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        Node* t= q.front().first;
        int h=q.front().second;
        q.pop();
        if(!m[h])
        {
            m[h]=t->data;
        }
        if(t->left)
        {
            q.push({t->left,h-1});
        }
        if(t->right)
        {
            q.push({t->right,h+1});
        }
    }
    for(auto x: m)
    {
        v.push_back(x.second);
    }
    return v;
}
