#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int i = 0,j =0;
        double temp = INT_MIN;
        while (j<nums.size())
        {
            sum+=nums[j];
            if(j-i+1 <k){
                j++;
            }
            else{
                temp = max(temp,sum);
                sum-= nums[i];
                i++;
                j++;
            }
        }  
        return temp/4;
    }
};
int main()
{
    
    return 0;
}