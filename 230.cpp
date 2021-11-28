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
int a;
    void inorder(TreeNode *root, int &k,int & count )
    {
        if(!root)return;
        if(root->left)inorder(root->left,k,count);
        count++;
        if(k == count)a = root->val;
        if(root->right)inorder(root->right,k,count);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> v;
        inorder(root,k,count);
        return a;
    }
};
int main()
{

    return 0;
}
// int ans;
//     void helper(TreeNode* root,int &k,int &count)
//     {
//         if(!root)
//             return;
//         helper(root->left,k,count);//we will first go the most smallest element 
//         count++;// and then start comparing
//         if(k==count)
//         {
//             ans=root->val;
//             return;
//         }
//         helper(root->right,k,count);// if left value is not the ans then we will go to the right and find the ans;
        
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         int count=0;//it maintains the no of smallest elements we have traversed
//         helper(root,k,count);
//         return ans;
//     }