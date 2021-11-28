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
    void preorder(TreeNode *root, vector<int> &ans)
    {
        if(!root)
        {
            return;
        }
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};
int main()
{

    return 0;
}