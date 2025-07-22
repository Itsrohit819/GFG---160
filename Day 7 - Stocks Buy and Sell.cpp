class Solution {
  public:
    int maximumProfit(vector<int> &a) {
        // code here
        int n=a.size();
        int ind=0,cur=0,ans=0;
        for(int i=1;i<n;i++){
            if(a[i] > a[i-1]){
                cur = max(cur,a[i]-a[ind]);
            }
            else{
                ans += cur;
                cur = 0;
                ind = i;
            }
        }
        ans += cur;
        return ans;
    }
};
