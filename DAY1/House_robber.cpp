#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int ans=0,prev=nums[0],prev1=0;
        for (int i=1;i<nums.size();i++){
            ans=max(nums[i]+prev1,prev);
            prev1=prev;
            prev=ans;
            
        }
        return ans;
    }
};