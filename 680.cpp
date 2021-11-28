#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool refer(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i++] != s[j--])
                return false;
            return true;
        }
    }
    bool validPalindrome(string s)
    {
        int i = 0, j = s.size();
        while (i < j)
        {
            if (s[i] != s[j])
            {
                return refer(s, i + 1, j) || refer(s, i, j - 1);
            }
            i++, j--;
        }
        return true;
    }
};
int main()
{

    return 0;
}