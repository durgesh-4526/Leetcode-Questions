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
int mini = INT_MAX;
    void counted(TreeNode *root, int c)
    {
        if(!root)return;
         c += 1;
        if(!root->left && !root->right)
        {
         mini = min(mini,c);
        }
         counted(root->left,c);
         counted(root->right,c);
    }
    int minDepth(TreeNode *root)
    {
        if(!root)return 0;
        counted(root, 0);
        return mini;
    }
};
int main()
{

    return 0;
}