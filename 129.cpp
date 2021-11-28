#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution
{
public:
 void helper(TreeNode *root, int &ans, string &s)
    {
        if (!root)
        {
            // int temp = stoi(s);
            // ans += temp;
            // temp = 0;
            return;
        }
        if(!root->left && !root->right)
        {
            int temp = stoi(s);
            ans += temp;
            temp = 0;
        }
        if (root->left)
        {
            s.push_back(root->val);
            helper(root->left, ans, s);
            // s.pop_back();
        }
        if (root->right)
        {
            s.push_back(root->val);
            helper(root->right, ans, s);
            // s.pop_back();
        }
    }
    int sumNumbers(TreeNode *root)
    {
        int ans = 0;
        string s = "";
        helper(root, ans, s);
        return ans;
    }
};
class Solutions {
public:
    void check(TreeNode * root,int count,int &ans)
    {
        if(!root)
        {
            return;
        }
        count *= 10;
        count += root->val;
        if(!root->left && !root->right)    
        {
            ans += count;
        }
        if(root->left)check(root->left,count,ans);
        if(root->right)check(root->right,count,ans);
        
    }
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        check(root,0,ans);
        return ans;
    }
};
int main()
{
    
    return 0;
}