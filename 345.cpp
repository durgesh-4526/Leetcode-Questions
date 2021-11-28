#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int check(char x)
    {
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
            return 1;
        
        return 0;
    }
    string reverseVowels(string s)
    {
        int a = 0;
        int b = s.size() - 1;
        while (a <= b)
        {
            if(check(s[a]) && check(s[b]))
            {
                swap(s[a],s[b]);
                ++a;
                --b;
            }
            else if(!check(s[a]) && !check(s[b]))
            {
                ++a;
                --b;
            }else if(!check(s[a]) && check(s[b]))
            {
                ++a;
            }else if(check(s[a]) && !check(s[b]))
            {
                --b;
            }
        }
        int i = 0;
        while (i != s.size()-1)
        {
            cout << s[i] << " ";
            i++;
        }
        return s;
    }
};
int main()
{
    string s = "leetcode";
    Solution sol;
    sol.reverseVowels(s);
    return 0;
}