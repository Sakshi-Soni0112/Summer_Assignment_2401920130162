class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
     int sum = 0;
     for(int i=0;i<k;i++){
        sum += nums[i];
     } 
     int maxSum = sum;
     int st = 0;
     int end = k;
     while(end<nums.size()){
        sum -= nums[st];
        st++;
        sum += nums[end];
        end++;
        maxSum = max(maxSum,sum);
     } 
     return (double)maxSum/k; 
    }
};
