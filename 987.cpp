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
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        vector<vector<int>> ans;
        int d = 0;
        queue<pair<TreeNode *, int>> q;
        q.push(make_pair(root,d));
        map<int,vector<int>> m;
        while (!q.empty())
        {
            
            pair<TreeNode*,int> p = q.front();
            q.pop();
            TreeNode * temp = p.first;
            int ab = p.second;
            // an.push_back(ab);
            // int a = temp->val;
            // m.insert(a,ab);
            // m.
            // an.push_back(temp->val);
            m[ab].push_back(temp->val);
            if(temp->left)
            {
                q.push(make_pair(root->left,d-1));
            }
            if(temp->right)
            {
                q.push(make_pair(root->right,d+1));
            }
            // for(auto i : m)
            // {
            //     for(auto j:i.first){
            //         an.push_back(j);
            //     }
            // }
            // ans.push_back(an);
        }
        // vector<int> an;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            vector<int> col;
            for (auto i : it->second)
            {
                col.push_back(i);
            }
            ans.push_back(col);
        }
        // ans.push_back
        return ans;
    }
};
int main()
{

    return 0;
}