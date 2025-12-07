class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0 ; 
        int j = height.size() - 1;
        int maxarea = -1;
        while(i < j){
            //area of a rectangle is = length * breadth
            int breadth = j - i;
            int length = min(height[i], height[j]);
            maxarea = max(maxarea, breadth*length);
            if( height[i] <= height[j] )i++;
            else j--;
        }
        return maxarea;
    }
};