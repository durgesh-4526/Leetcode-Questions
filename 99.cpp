#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution
{
public:
    vector<int> v;
    int i = 0;
    void inorder(TreeNode *root)
    {
        if(!root)return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    void arrange(TreeNode *root)
    {
        if(!root)return;
        arrange(root->left);
        root->val = v[i++];
        arrange(root->right);
    }
    void recoverTree(TreeNode *root)
    {
        inorder(root);
        sort(v.begin(),v.end());
        arrange(root);
        return root;
    }
};
int main()
{

    return 0;
}