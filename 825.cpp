#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = INT_MIN;
        int ans = 0;
        if(arr.size() <3)
        {
            return 0;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
                ans = i;
            }
        }
        cout<<ans;
        return ans;
        
    }
};
int main()
{
    vector<int> arr = {24,69,100,99,79,78,67,36,26,19};
    Solution sol;
    sol.peakIndexInMountainArray(arr);
    return 0;
}