// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& a) {
        // code here
        int n=a.size();
        int cnt=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(a[i] != 0){
                v.push_back(a[i]);
            }
            else{
                cnt++;
            }
        }
        for(int i=0;i<cnt;i++){
            v.push_back(0);
        }
        for(int i=0;i<n;i++){
            a[i] = v[i];
        }
    }
};