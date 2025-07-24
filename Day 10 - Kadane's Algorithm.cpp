class Solution {
  public:
    int maxSubarraySum(vector<int> &a) {
        // Code here
        int cur = 0,mx = INT_MIN,n=a.size();
        for(int i=0;i<n;i++){
            cur += a[i];
            if(cur >= mx){
                mx = cur;
            }
            if(cur < 0){
                cur = 0;
            }
        }
        return mx;
    }
};