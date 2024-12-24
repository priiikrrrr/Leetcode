class Solution {
public:
    int maxArea(vector<int>& height) {
        int length = height.size();
        int maxWater = -1;
        int i = 0; 
        int j = length -1;

        //water hold = width * gap == min(arr[i], arr[j]) *(j-i) 
        while(i < j){
            int gap = j - i;
            int width = min(height[i],height[j]);
            int area = width*gap;
            maxWater = max(maxWater,area);
            if(height[i] <= height[j]) i++;
            else j--;
        }
        return maxWater;
    }
};