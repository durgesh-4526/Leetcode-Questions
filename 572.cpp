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
    bool identical(TreeNode *root, TreeNode *Sub)
    {
        if (!root && !Sub)
            return true;
        if (!root || !Sub)
            return false;
        if (root->val != Sub->val)
            return false;
        return identical(root->left, Sub->left) && identical(root->right, Sub->right);
    }
    void check(TreeNode *root, TreeNode *Sub, bool yes)
    {
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if (temp->val == Sub->val)
            {
                bool is = identical(temp, Sub);
                if (is)
                {
                    yes = true;
                }
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        bool yes = false;
        check(root, subRoot, yes);
        return yes;
    }
};
int main()
{

    return 0;
}