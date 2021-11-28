#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
// class Solution
// {

// void rightview(TreeNode *root, vector<int> &ans)
// {
//     if(!root)
//     {
//         return;
//     }
//     bool isfirst = true;
//     queue<TreeNode*> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         TreeNode* temp = q.front();
//         q.pop();
//         if(!temp)
//         {
//             if(q.size() == 0)
//             {
//                 return;
//             }
//             q.push(NULL);
//         }
//         else if(isfirst){
//             ans.push_back(temp->val);
//             isfirst = false;
//         }
//         else{
//             if(temp->right){
//                 q.push(temp->right);
//             }
//             if(temp->left)
//             {
//                 q.push(temp->left);
//             }
//         }

//     }

// }
//     vector<int> rightSideView(TreeNode *root)
//     {
//         vector<int> ans;
//         if(!root)
//         {
//             return ans;
//         }
//         bool isfirst = true;
//         queue<TreeNode*> q;
//         q.push(root);
//         while (!q.empty())
//         {
//             TreeNode* temp = q.front();
//             q.pop();
//             if(!temp)
//             {
//                 if(q.size() == 0)
//                 {
//                     return ans;
//                 }
//                 q.push(NULL);
//             }
//             else if(isfirst){
//                 ans.push_back(temp->val);
//                 isfirst = false;
//             }
//             else{
//                 if(temp->right){
//                     q.push(temp->right);
//                 }
//                 if(temp->left)
//                 {
//                     q.push(temp->left);
//                 }
//             }

//         }
//         return ans;
//     }
// };
class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;
        if (!root)
        {
            return ans;
        }
        bool isfirst = true;
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if (!temp)
            {
                if (q.size() == 0)
                {
                    return ans;
                }
                q.push(NULL);
                isfirst = true;
            }
            else
            {
                if (isfirst)
                {
                    ans.push_back(temp->val);
                    isfirst = false;
                }
                else
                {
                    if (temp->right)
                    {
                        q.push(temp->right);
                    }
                    if (temp->left)
                    {
                        q.push(temp->left);
                    }
                }
            }
        }
        return ans;
    }
};
int main()
{
    // +++++++++++++++++++++
    return 0;
}