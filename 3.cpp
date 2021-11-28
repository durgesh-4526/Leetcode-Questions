#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        unordered_map<char,int> mp;
        int ans = -1;
        while (j<s.size())
        {
            mp[s[i]]++;
            if(mp.size() < 2){
                j++;
            }
            if(mp.size() == 2){
                ans = max(ans,j-i+1);
                j++;
            }
            if(mp.size() > 2){
                while (mp.size()>2)
                {
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }
                    i++;
                }j++;
            }
        }return ans;
        
    }
};
int main()
{
    
    return 0;
}