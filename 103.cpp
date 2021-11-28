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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (!root)
        {
            return;
        }
        stack<TreeNode *> n1;
        stack<TreeNode *> n2;
        n1.push(root);
        while (!n1.empty() || !n2.empty())
        {
            vector<int> v;
            while (!n1.empty())
            {
                TreeNode* temp = n1.top();
                v.push_back(temp->val);
                n1.pop();
                if(temp->left)
                {
                    n2.push(temp->left);
                }
                if(temp->right)
                {
                    n2.push(temp->right);
                }
            }
            if(v.size() > 0)ans.push_back(v); 
            v = {}; // most importante
            while (!n2.empty())
            {
                TreeNode* temp = n2.top();
                v.push_back(temp->val);
                n2.pop();
                if(temp->right)
                {
                    n1.push(temp->right);
                }
                if(temp->left)
                {
                    n1.push(temp->left);
                }
            }
            if(v.size() > 0)ans.push_back(v);            
        }
        return ans;
    }
};
int main()
{

    return 0;
}