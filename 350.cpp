#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        
        vector<int> ans;
        unordered_map<int,int> m;
        for(auto i : nums1)
        {
            m[i]++;

        }
        for (auto i : nums2)
        {
            if(m[i])
            {
                ans.push_back(i);
                m[i]--;
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        return ans;
    }
};
int main()
{
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    Solution s;
    s.intersect(nums1,nums2);

    return 0;
}