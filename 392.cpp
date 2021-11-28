#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        bool ans = false;
        int i = 0;
        int j = 0;
        while (j != t.size())
        {
            if (s[i] == t[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        if (i == s.size())
        {
            ans = true;
            cout<<"true";
            return ans;
        }
        else
        {
            cout<<"false";
            return ans;
        }
    }
};
int main()
{
    string s = "axc";
    string t = "ahbgdc";
    Solution sol;
    sol.isSubsequence(s,t);
    return 0;
}