#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int a = 0;
        int b = s.size()-1;
        while (a < b)
        { 
            if(isalpha(s[a]) && isalpha(s[b]))
            {
                swap(s[a++],s[b--]);
            }
            if(!isalpha(s[a]))
            {
                a++;
            }
            if(!isalpha(s[b]))
            {
                b--;
            }
        }
        cout<<"the s after is ";
        cout<<s;
        return s;
    }
};
int main()
{
    string s = "a-bC-dEf-ghIj";
    Solution sol;
    sol.reverseOnlyLetters(s);
    return 0;
}