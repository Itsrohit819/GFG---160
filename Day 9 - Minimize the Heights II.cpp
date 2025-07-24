class Solution {
  public:
    int getMinDiff(vector<int> &a, int k) {
        // code here
        int n= a.size();
        sort(a.begin(),a.end());
        int ans = a[n-1]-a[0];
        for(int i=1;i<n;i++){
            if((a[i]-k)>=0){
                ans = min(ans,abs(min(a[0]+k,a[i]-k)-max(a[i-1]+k,a[n-1]-k)));
            }
        }
        return ans;
    }
};