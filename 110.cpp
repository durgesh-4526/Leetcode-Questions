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
    bool a = true;
    int solve(TreeNode *root)
    {
        if (!root || a == false)
        {
            return 0;
        }

        int LH = solve(root->left);
        int RH = solve(root->right);
        int ab = abs(LH-RH);
        if (ab > 1)
        {
            a = true;
        }
        return 1 + max(LH, RH);
    }
    bool isBalanced(TreeNode *root)
    {
        solve(root);
        return a;
    }
};
int main()
{

    return 0;
}