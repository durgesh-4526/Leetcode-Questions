#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        double sum;
        vector<double> v;
        queue<TreeNode *> q;
        if(!root)return v;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 1; i <= n; i++)
            {
                TreeNode * temp = q.front();
                q.pop();
                sum += temp->val;
                if(temp->left != NULL)q.push(temp->left);
                if(temp->right != NULL)q.push(temp->right);
            }
            v.push_back(sum/n);
            sum = 0;            
        }
        return v;
    }
};
int main()
{
    
    return 0;
}