class Solution {
public:
// pge/nge concepts
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        //next smaller ele in arr // here, ele is 

        int nse[n];
        stack<int>st;
        nse[n-1] = n;
        st.push(n-1);
        for(int i = n-2 ; i >= 0 ; i--){
            while(st.size()>0 && arr[st.top()] >= arr[i]) st.pop();
            if(st.size() == 0)nse[i] = n;
            else nse[i] = st.top();
            st.push(i);
        }
        //prev smaller ele in arr // here, ele is index
        int pse[n];
        stack<int>gt;
        pse[0] = -1;
        gt.push(0);
        for(int i  = 1 ; i < n ; i++){
            while(gt.size()>0 && arr[gt.top()] >= arr[i]) gt.pop();
            if(gt.size() == 0)pse[i] = -1;
            else pse[i] = gt.top();
            gt.push(i);
        }
        int maxArea = 0;
        for(int i = 0 ; i < n ; i++){
            int area = arr[i] * (nse[i] - pse[i] -1);
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};