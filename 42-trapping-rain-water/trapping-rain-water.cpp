class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        //find previous greatest elements array
        int prev[n];
        prev[0] =  -1;
         int max = height[0];
        for(int i = 0 ; i < n ; i++){
            prev[i] = max;
            if(max < height[i]) max = height[i];
        }

        //find next greatest elements array
        int next[n];
        next[n-1] = -1;
        max = height[n-1];
        for(int i = n-2 ; i >= 0 ; i--){
            next[i] = max;
            if(max < height[i]) max = height[i];
        }

        //minimum of both array in sep array
        int mini[n];
        for(int i = 0 ; i <n ; i++){
            mini[i] = min(prev[i], next[i]);
        }

        //calculating volume of water
        int water = 0;
        for(int i = 0 ; i < n ; i++){
            if(height[i] < mini[i]){
                water += (mini[i] - height[i]);
                 //agar walls ki height badi hai minimum of mini of both sep array se 
                //then subtracting the both will give the amount of water the wall will hold b/w the 
                //minimum of element and wall 
            }

        } 
        return water;    
    }
};