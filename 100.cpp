#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p and !q)
        {
            return true;
        }
        if((p and !q) || (!p and q))
        {
            return false;
        }
        if(p->val != q->val)
        {
            return false;
        }
        bool ans1 = isSameTree(p->right,q->right);
        bool ans2 = isSameTree(p->left,q->left);
        return (ans1 and ans2);
        

    }
};
int main()
{
    
    return 0;
}