#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> ans;
        int i = 0;
        int n = nums.size();
        while (i<n)
        {
            if(nums[i] != nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }else{
                i++;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {   
            if (nums[i] != i + 1)
            {
                ans.push_back(i + 1);
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
        return ans;
    }
};
int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    Solution Sol;
    Sol.findDisappearedNumbers(nums);
    return 0;
}