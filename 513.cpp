#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        int ans = root->val;
        queue<TreeNode* >q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            if(temp->right)
            {
                ans = temp->right->val;
                q.push(temp->right);
            }
            if(temp->left)
            {
                ans = temp->left->val;
                q.push(temp->left);
            }
        }
        return ans;
    }
};
int main()
{
    
    return 0;
}