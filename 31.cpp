#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size()-2;
        while(i>=0 && nums[i] >= nums[i+1])
        {
            i--;
        }
        if(i>=0)
        {
            int j = nums.size()-1;
            while(j>=0 && nums[j] <= nums[i])j--;
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+1+i,nums.end());
    }
};
int main()
{
    vector<int> nums = {1,1,5}
    Solution s;
    s.nextPermutation(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}