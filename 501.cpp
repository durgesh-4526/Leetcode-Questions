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
    unordered_map<int, int> m;
    void inorder(TreeNode *root)
    {
        if(!root)return;
        inorder(root->left);
        m[root->val]++;
        inorder(root->right);
    }
    vector<int> findMode(TreeNode *root)
    {
        vector<int> v;
        int maxi = INT_MIN;
        inorder(root);
        for(auto i : m)
        {
            maxi = max(maxi,i.second);
        }
        for(auto i : m)
        {
            if(i.second == maxi)
            {
                v.push_back(i.first);
            }
        }
        return v;
    }
};
int main()
{

    return 0;
}