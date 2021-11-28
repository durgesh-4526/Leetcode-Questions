#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> ans;
    set<vector<int>> see;
    void per(vector<int> nums, int index)
    {
        if (index == nums.size())
        {
            if (see.find(nums) == see.end())
            {
                see.insert(nums);
                ans.push_back(nums);
            }
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            per(nums, index + 1);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        per(nums, 0);
        return ans;
    }
};
int main()
{
    vector<int> nums = {1, 1, 2};
    Solution sol;
    sol.permuteUnique(nums);
    return 0;
}