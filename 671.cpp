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
    void inorder(TreeNode *root, vector<int> &v)
    {
        if(!root)return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int findSecondMinimumValue(TreeNode *root)
    {
        int mini = -1;
        vector<int> v;
        inorder(root, v);
        sort(v.begin(),v.end());
        int a = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            if(a < v[i])
            {
                mini = v[i];
                break;
            }
        }
        return mini;
    }
};
int main()
{

    return 0;
}