#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    vector<Node *> children;
};
class Solution
{
public:
    void post(Node *root, vector<int> &ans)
    {
        if(!root)return;
        for(auto i : root->children)
        {
            post(i,ans);
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node *root)
    {
        vector<int> ans;
        if (!root)
            return ans;
        post(root, ans);
        return ans;
    }
};
int main()
{

    return 0;
}