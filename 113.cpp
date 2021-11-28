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
    vector<vector<int>> a;
    vector<int> ref;
    int sums = 0;
    void sum(TreeNode *root, int target, int sums)
    {
        if (!root)
            return;
        sums += root->val;
        ref.push_back(root->val);
        if (!root->left && !root->right && sums == target)
        {
            a.push_back(ref);
        }
        else
        {

            sum(root->left, target, sums);
            sum(root->right, target, sums);
        }
        ref.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        int sums = 0;
        if (!root)
            return a;
        sum(root, targetSum, sums);
        return a;
    }
};
int main()
{

    return 0;
}