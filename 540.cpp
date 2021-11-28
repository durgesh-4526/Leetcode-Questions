#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
        int n =0;
        for (int i = 0; i < nums.size(); i++)
        {
            n = n^nums[i];
        }
        cout<<n;
        return n;
        
    }
};
int main()
{
    vector<int> nums = {1};
    Solution s;
    s.singleNonDuplicate(nums);
    return 0;
}