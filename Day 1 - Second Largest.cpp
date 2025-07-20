class Solution {
  public:
    int getSecondLargest(vector<int> &a) {
        // code here
        int n = a.size();
        int val = INT_MIN;
        for(int i=0;i<n;i++){
            val = max(val,a[i]);
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(a[i]!=val){
                ans = max(ans, a[i]);
            }
        }
        return ans;
    }
};