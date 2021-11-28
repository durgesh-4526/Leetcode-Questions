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
    int sum = 0;
    int basics(TreeNode *root)
    {
        if(!root)return 0;
        int left = basics(root->left);
        int right = basics(root->right);
        sum+= abs(left-right);
        return root->val+left+right;

    }
    int findTilt(TreeNode *root)
    {
        basics(root);
        return sum;
    }
};
int main()
{

    return 0;
}