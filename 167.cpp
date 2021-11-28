#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans ;
        int i = 0,j = numbers.size()-1;
        while(i<j)
        {
            if (numbers[i]+numbers[j] < target)
            {
                i++;
            }
            else if (numbers[i]+numbers[j] > target)
            {
                j--;
            }else{
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
                
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i];
        }
        return ans;
    }
};
int main()
{
    vector<int> num = {2,3,4};
    int target = 6;
    Solution sol;
    sol.twoSum(num,target);
    return 0;
}