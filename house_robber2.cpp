class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)return nums[0];   
        if(nums.size() == 2)return max(nums[0],nums[1]);   
        int prevprev = 0;
        int prev = nums[0]; 
        int ans1 = 0,ans2 = 0;
        for(int i = 1; i<nums.size()-1; i++){
            ans1=max(nums[i]+prevprev,prev);
            prevprev=prev;
            prev=ans1;
        }
        prevprev=0;
        prev=nums[1];
        for(int i = 2; i<nums.size(); i++){
            ans2=max(nums[i]+prevprev,prev);
            prevprev=prev;
            prev=ans2;
        }
        return max(ans1,ans2);
    }
};