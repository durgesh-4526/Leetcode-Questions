#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "x,";
        stirng l = serialize(root->left);
        string r = serialize(root->right);
        return to_string(root->val)+","+l+r;
    }

    // Decodes your encoded data to tree.
    int curr = 0;
    TreeNode* deserialize(string data) {
        if(s[curr] == -1)
        {
            curr++;
            return NULL;
        }
        TreeNode * root = new TreeNode(s[curr]);
        curr++;
        root->left = deserialize(data);
        root->right = deserialize(data);
    }
};
int main()
{
    
    return 0;
}