#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        string a;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]) || isalnum(s[i]))
            {
                ans.push_back(tolower(s[i]));
                a.push_back(tolower(s[i]));
            }
        }
        reverse(a.begin(),a.end());
        return ans == a;
    }
};
int main()
{
    string s = "0P";
    Solution sol;
    cout<<sol.isPalindrome(s);
    return 0;
}