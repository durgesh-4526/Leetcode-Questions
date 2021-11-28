#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        bool ans = false;
        for (int i = 0; i < nums.size()-1; i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    if(abs(i - j) <= k)
                    {
                        return true;
                        break;
                    }
                }
            }
            
        }return ans;
        
    }
};
int main()
{
    vector<int>nums = {1,2,3,1,2,3};
    int k = 2;
    Solution sol;
    cout<<sol.containsNearbyDuplicate(nums,k);
    return 0;
}