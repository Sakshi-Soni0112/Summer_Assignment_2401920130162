class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n = s.length();
      vector<int> arr(256, -1);
      int maxLen = 0;
      int l = 0, r=0;
      while(r<n){
        if(arr[s[r]] != -1){
            if(arr[s[r]] >= l){
                l = arr[s[r]]+1;
            }
        }
        int len = r-l+1;
        maxLen = max(len,maxLen);
        arr[s[r]] = r;
        r++;
      }  
      return maxLen;
    }
};
