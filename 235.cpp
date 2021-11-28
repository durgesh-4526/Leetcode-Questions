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
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (!root)
        {
            return NULL;
        }
        if(p->val < root->val && q->val < root->val)
        {
            return lowestCommonAncestor(root->left,p,q);
        }
        if(p->val > root->val && q->val > root->val)
        {
            return lowestCommonAncestor(root->right,p,q);
        }
        return root;
    }
};
int main()
{

    return 0;
}