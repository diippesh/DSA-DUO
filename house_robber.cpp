class Solution {
public:
    int f(vector<int>& nums,vector<int>& dp,int i){
        if(i<0)return 0;
        if(i == 0)return nums[i];
        if(dp[i]!=-1)return dp[i];

        int first = INT_MIN; 
        int second = INT_MIN; 
        first = nums[i]+f(nums,dp,i-2);
        second = f(nums,dp,i-1);
        return dp[i] = max(first,second);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return f(nums,dp,n-1);
    }
};