#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        vector<int> ans;
        int sum = 0;
        for (int i = 0; i < num.size(); i++)
        {
            sum *= 10;
            sum += num[i];
        }
        sum += k;
        int remainder;
        for (int i = 0; i < num.size(); i++)
        {
            remainder = sum % 10;
            ans.push_back(remainder);
            sum /= 10;
        }
        reverse(ans.begin(),ans.end());
        for (int i = 0; i < num.size(); i++)
        {
            cout << ans[i];
        }
        return ans;
    }
};
int main()
{
    int k = 34;
    vector<int> num = {1, 2, 0, 0};
    Solution s;
    s.addToArrayForm(num, k);
    return 0;
}