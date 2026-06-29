class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       stack<int>st;
       int n = nums2.size();
       int m = nums1.size();
      vector<int>nge(n);
       vector<int>ans;
       for(int i= n-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums2[i]){
            st.pop();
        }
        if(st.empty()){
            nge[i]=-1;}
    else {
        nge[i]= st.top();
        }
            st.push(nums2[i]);
        }
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
        mp[nums2[i]] = nge[i];
       }
       for(int i = 0;i<m;i++){
        ans.push_back(mp[nums1[i]]);
       }
       
       return ans;
    }
};
