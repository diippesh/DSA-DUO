#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int out=0;
        int maxi=INT_MIN;
        for(auto it :nums){
            out+=it;
            maxi=max(out,maxi);
            if(out<0)out=0;
        }
        return maxi;
    }
