class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& a, int d) {
        // code here
        int n=a.size();
        d = d%n;
        reverse(a.begin(),a.end());
        reverse(a.begin(),a.begin()+n-d);
        reverse(a.begin()+n-d,a.end());
    }
};