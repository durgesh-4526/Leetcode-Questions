#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> v;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            int s = q.size();
            int mini = INT_MAX;
            for (int i = 0; i < s; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                mini = min(mini,temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            v.push_back(mini);
        }
        
    }
};
int main()
{
    
    return 0;
}