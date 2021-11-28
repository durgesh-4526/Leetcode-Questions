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
vector<string> v;
    void path(TreeNode *root,string paths)
    {
        
        // vector<string> v;
        if(!root)return;
        if(!root->left && !root->right)
        {
            paths += to_string(root->val);   
            v.push_back(paths);
        }
        paths += to_string(root->val) + "->";
        if(root->left)
        {
            path(root->left,paths);
        }
        if(root->right)
        {
            path(root->right,paths);
        }

    }
    vector<string> binaryTreePaths(TreeNode *root)
    {
        string paths = "";
        path(root,paths);
        return v;
    }
};
int main()
{

    return 0;
}