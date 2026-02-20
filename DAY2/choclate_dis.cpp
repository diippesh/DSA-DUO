#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        int n=a.size();
        int diff=a[n-1]-a[0];
        for(int i=m-1;i<n;i++){
            diff=min(diff,a[i]-a[i-m+1]);
        }
        return diff;
    }
};