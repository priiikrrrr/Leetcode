class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>>pq;
    long long k;
    KthLargest(int k, vector<int>& nums) {
        // this->array = nums;
        this->k = k;
        for(int i : nums){
            pq.push(i);
            if(pq.size() > k)pq.pop();
        }
    }
    
    int add(int val) {
        // array.push_back(val);
        // sort(array.begin(), array.end());
        // return array[array.size() - k];
        pq.push(val);
        if(pq.size() > k)pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */