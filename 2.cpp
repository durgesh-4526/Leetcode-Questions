#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int zero = 0;
        ListNode *cs = new ListNode();
        ListNode *l3 = cs;
        vector<int> a;
        vector<int> b;
        int c = 0;
        int d = 0;
        while (l1->next != NULL)
        {
            a.push_back(l1->val);
        }
        while (l2->next != NULL)
        {
            b.push_back(l2->val);
        }
        for (int i = a.size()-1; i >= 0; i--)
        {
            c*=10;
            c+=a[i];
        }
        for (int i = b.size()-1; i >= 0; i--)
        {
            d+=10;
            d+=b[i];
        }
        int e = c+d;
        while (e != 0)
        {
            int remain = e%10;
            e = e/10;
            ListNode *newNode = new ListNode();
            l3->next = newNode;
        }
        return cs->next;
    }
};
int main()
{

    return 0;
}