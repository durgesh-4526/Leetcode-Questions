#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
TreeNode* temp = NULL;
    bool isValidBST(TreeNode* root) {
        if(!root)
        {
            return true;
        }
        if(!isValidBST(root->left))
        {
            return false;
        }
        if(temp != NULL && root->val <= temp->val)
        {
            return false;
        }
        temp = root;
        if(!isValidBST(root->right))
        {
            return false;
        }
        return true;
        
    }
};
int main()
{
    
    return 0;
}