#include<bits/stdc++.h>
using namespace std;


class Solution {
public:

int dp[201][1001];
    int res(vector<int>& nums, int target,int idx){
        if(idx>=nums.size() || target<0){
            return 0;
        }
        if(target==0){
            return 1;
        }
        if(dp[idx][target]!=-1){
            return dp[idx][target];
        }
        int take=res(nums,target-nums[idx],0);
        int not_take=res(nums,target,idx+1);
        return dp[idx][target]=not_take+take;
    }
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        return res(nums,target,0);
    }
};