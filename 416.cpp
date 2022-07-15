class Solution {
public:
    bool canPartition(vector<int>& nums) {
         int n = nums.size();
        int sum = 0;
        for(int i =0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        if(sum % 2 != 0)return false;
        sum = sum/2;
        vector<bool>dp(sum+1,0);
        for(int i=0;i<n;i++)
            for(int j=sum;j>=nums[i];j--){
               if(dp[j-nums[i]]==1 || j==nums[i])
                dp[j]=1;
            }
        return dp[sum];
    }
};
