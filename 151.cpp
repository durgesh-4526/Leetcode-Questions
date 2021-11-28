#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int a = s.size();
        // cout<<s[15];
        for (int i = s.size()-1; i >=0; i--)
        {
            if(s[i] == ' '){
                for (int j = i; j <= a ; j++)
                {
                    ans.push_back(s[j]);
                }
                a = i-1;
                if(a != 0)
                {
                    ans.push_back(' ');
                }
                
            }
        }
        cout<<ans;
        return ans;
        
    }
};
int main()
{
    string s= "the sky is blue";
    Solution sol;
    sol.reverseWords(s);
    return 0;
}