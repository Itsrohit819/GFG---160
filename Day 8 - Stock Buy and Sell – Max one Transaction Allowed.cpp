class Solution {
  public:
    int maximumProfit(vector<int> &a) {
        // code here
        int n = a.size();
        int mn = INT_MAX, ans = 0;
        for(int i=0;i<n;i++){
            mn = min(mn,a[i]);
            ans = max(ans,(a[i]-mn));
        }
        return ans;
    }
};
