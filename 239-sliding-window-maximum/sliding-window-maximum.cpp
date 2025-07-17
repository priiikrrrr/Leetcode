class Solution {
    //!! redo
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        //num of windows = n - k + 1
        if(k == 1) return arr;
        int n = arr.size();
        int ngi[n];
        stack<int>st;
        ngi[n-1] = n;
        st.push(n-1);

    for(int i  = n-2 ; i >= 0 ; i--){
        while(st.size()>0 && arr[st.top()] <= arr[i]) st.pop();
        if(st.size() == 0)ngi[i] = n;
        else ngi[i] = st.top();
        st.push(i);
    }
        vector<int>ans;
        int j = 0;
        for(int i = 0 ; i < (n - k + 1) ; i++){
            if(j < i) j = i;
            int mx = arr[j];
            while(j < (i+k)){
                mx = arr[j]; //mark ans
                if(ngi[j] >= i+k)break;
                j  = ngi[j]; //go to next
            }
            ans.push_back(mx);
        }
        return ans;
    }
};











        //BF
        // for(int i = 0 ; i < (n-k+1) ; i++){
        //     int mx = INT_MIN;
        //     for(int j = i ; j < (i+k) ; j++){
        //         mx = max(mx, arr[j]);
        //     }
        //     nge.push_back(mx);
        // }
        // return nge;