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
    void postorder(TreeNode *root, stack<TreeNode *> &s)
    {
        postorder(root->right,s);
        s.push(root);
        postorder(root->left,s);
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        stack<TreeNode *> s;
        postorder(root, s);
        TreeNode * a = new TreeNode();
        a = s.top();
        s.pop();
        while (!s.empty())
        {
            a = a->right;
            a = s.top();
            s.pop();
        }
        return a;
    }
};
int main()
{

    return 0;
}