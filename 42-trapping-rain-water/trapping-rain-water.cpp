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
        //next greatest element using prev as next and minimum will also recide in the same array hence 
        // we are now using just one array -> more optimized 

        prev[n-1] = -1;
        max = height[n-1];
        for(int i = n-2; i >= 0 ; i--){
            if(max < prev[i]) prev[i] = max;
            if(max < height[i]) max = height[i];
        }    

        //calculating volume of water
        int water = 0;
        for(int i = 0 ; i < n ; i++){
            if(height[i] < prev[i]){
                water += (prev[i] - height[i]);
                 //agar walls ki height badi hai minimum of mini of both sep array se 
                //then subtracting the both will give the amount of water the wall will hold b/w the 
                //minimum of element and wall 
            }

        } 
        return water;    
    }
};