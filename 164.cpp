#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxi = INT_MIN;
        sort(nums.begin(),nums.end());
        if(nums.size() < 2 ){
            return 0;
        }
        for (int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i+1]-nums[i] > maxi)
            {
                maxi = nums[i+1]-nums[i];
            }
        }
        return maxi;
    }
};
int main()
{
    vector<int> nums = {3,6,9,1};
    Solution sol;
    cout<<sol.maximumGap(nums);
    return 0;
}