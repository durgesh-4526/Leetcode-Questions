#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if(strs.size() == 0)
        {
            return ans;
        }
        string temp = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            while (strs[i].find(temp) != 0)
            {
                temp = temp.substr(0,temp.size()-1);
            }
            if(temp == "")break;
            
        }
        cout<<temp;
        return temp;
        
    }
};
int main()
{
    vector<string> strs = {"dog","racecar","car"};
    Solution sol;
    sol.longestCommonPrefix(strs);
    return 0;
}