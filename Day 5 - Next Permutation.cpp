class Solution {
  public:
    void nextPermutation(vector<int>& a) {
        // code here
        int ind=-1;
        int n=a.size();
        for(int i=n-2;i>=0;i--){
            if(a[i] < a[i+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            sort(a.begin(),a.end());
        }
        else{
            for(int j=n-1;j>=ind;j--){
                if(a[j] > a[ind]){
                    swap(a[j],a[ind]);
                    break;
                }
            }
            reverse(a.begin()+ind+1,a.end());
        }
    }
};