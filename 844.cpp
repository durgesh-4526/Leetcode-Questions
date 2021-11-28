#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    
    bool backspaceCompare(string s, string t)
    {
        stack<char> a;
        stack<char> b;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '#')
            {
                if (!a.empty())
                {
                    a.pop();
                }
            }
            else
            {
                a.push(s[i]);
            }
        }
        for (int j = 0; j < t.length(); j++)
        {

            if (t[j] == '#')
            {
                if (!b.empty())
                {
                    b.pop();
                }
            }
            else
            {
                b.push(t[j]);
            }
        }
        return a == b;
    }
};
int main()
{
    string s = "ab#c";
    string t = "ad#c";
    Solution sol;
    cout<<sol.backspaceCompare(s, t);
    return 0;
}