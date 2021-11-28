#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    int h =0;
    int diameter(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int lh = diameter(root->left);
        int rh = diameter(root->right);
        if(1+lh+rh > h)
        {
            h = 1+lh+rh;
        }
        return 1+ max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root)
    {
        diameter(root);
        return h;
    }
};
// class Solution {
// public:
//     int h =0;
//     int diameterOfBinaryTree(TreeNode* root)
//     {
//         if(!root)
//         {
//             return 0;
//         }
//         int lh = diameterOfBinaryTree(root->left);
//         int rh = diameterOfBinaryTree(root->right);
//         if(1+lh+rh > h)
//         {
//             h = 1+lh+rh;
//         }
//         return 1+ max(lh,rh);
//     }
// };
int main()
{
    
    return 0;
}