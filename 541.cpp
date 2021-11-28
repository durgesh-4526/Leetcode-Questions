#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseStr(string s, int k)
    {
        for (int i = 0; i < s.length(); i += (2 * k))
        {
            if (i + k < s.length())
            {
                reverse(s.begin() + i, s.begin() + i + k);
            }
            else
            {
                reverse(s.begin() + i, s.end());
            }
        }
        cout << s;
        return s;
    }
};
int main()
{
    string s = "abcdef";
    int k = 2;
    Solution sol;
    sol.reverseStr(s, k);
    return 0;
}