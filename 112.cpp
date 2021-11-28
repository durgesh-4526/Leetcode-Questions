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
    bool ans = false;
    int sum = 0;
    void ref(TreeNode * root, int target)
    {
        if(!root){
            return;
        }
        sum += root->val;
        if(!root->left && !root->right && sum == target)
        {
            ans = true;
            return;
        }
        if(root->left)
        {
            ref(root->left,target);
        }
        if(root->right)
        {
            ref(root->right,target);
        }
    }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        ref(root,targetSum);
        return ans;
    }
};
int main()
{

    return 0;
}