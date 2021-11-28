#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> ans;
    set<vector<int>> s;
    void solve(int index,vector<int> nums,vector<int> a)
    {
        if(index == nums.size())
        {
            if(s.find(a) == s.end()){

            ans.push_back(a);
            s.insert(a);
            }return;
        }
        solve(index+1,nums,a);
        a.push_back(nums[index]);
        solve(index+1,nums,a);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<int> a;
        // vector<vector<int>> ans;
        solve(0,nums,a);
        return ans;
    }
};
int main()
{

    return 0;
}
