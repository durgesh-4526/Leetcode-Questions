#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s1[256] = {0};
        int s2[256] = {0};
        cout<<s1[s[5]];
        for(int i = 0;i<s.size();i++)
        {
            if(s1[s[i]] != s2[t[i]]){
                return false;
            }
            s1[s[i]] = i+1;
            s2[t[i]] = i+1;
        }return true;
    }
};
int main()
{
    string s = "egg";
    string t = "add";
    Solution sol;
    sol.isIsomorphic(s,t);
    return 0;
}