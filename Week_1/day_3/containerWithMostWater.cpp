class Solution {
public:
    int maxArea(vector<int>& height) {
     int st = 0;
     int end = height.size()-1;
     int length;
     int width;
     int maxArea = INT_MIN;
     while(st<end){
     length = min(height[st],height[end]);
     width = end - st;
     int area = length * width;
     maxArea = max(maxArea , area);
     if(height[st]<height[end]) st++;
     else end--;
     }  
     return maxArea; 
    }
};
