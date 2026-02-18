 int climbStairs(int n) {
        int curr,prev1=1,prev2=0;
        for(int i=1;i<=n;i++){
            curr=prev1+prev2;
            prev2=prev1;
            prev1=curr;
        }
       return curr;
    }