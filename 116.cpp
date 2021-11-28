#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;
};
class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
        {
            return root;
        }
        queue<Node*> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            while(size--)
            {

            Node * temp = q.front();
            q.pop();
            if(size> 0)
            {
                temp->next = q.front();
            }
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            }
        }return root;
        
    }
};
int main()
{
    
    return 0;
}