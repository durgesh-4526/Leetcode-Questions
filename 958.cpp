#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        bool ans = false;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left)
            {
                if(ans)return false;
                q.push(temp->left);
            }else{
                ans = true;
            }
            if(temp->right)
            {
                if(ans)return false;
                q.push(temp->right);
            }else{
                ans = true;
            }
        }return ans;
    }
};
int main()
{
    
    return 0;
}