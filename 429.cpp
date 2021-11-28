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
    vector<int> ab;
    void sum(Node *root, vector<vector<int>> &a)
    {
        if (!root)
            return;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            ab.clear();
            while (size--)
            {
                Node *temp = q.front();
                q.pop();
                ab.push_back(temp->val);
                for (auto i : temp->children)
                {
                    q.push(i);
                }
            }
            a.push_back(ab); 
        }
    }
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> a;
        if (!root)
            return a;
        sum(root, a);
        return a;
    }
};
int main()
{

    return 0;
}