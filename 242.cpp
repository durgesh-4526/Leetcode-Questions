#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t){
        map<char,int> m;
        map<char,int> n;
        for (auto i:s)
        {
            ++m[i];
        }
        for (auto j:t)
        {
            ++n[j];
        }
        return m == n;
    }
};
int main()
{
    string s = "anagram";
    string t = "car";
    Solution sol;
    cout<<sol.isAnagram(s,t);
    return 0;
}