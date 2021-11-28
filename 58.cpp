#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int a = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                a++;
            }
            else
            {
                if (a > 0)
                {
                    break;
                }
                else
                {
                    continue;
                }
            }
        }return a;
    }
};
int main()
{
    string s = "Hello World";
    Solution sol;
    cout<<sol.lengthOfLastWord(s);
    return 0;
}