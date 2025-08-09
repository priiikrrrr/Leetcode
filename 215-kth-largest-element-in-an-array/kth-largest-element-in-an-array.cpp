class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i : nums){
            pq.push(i);

            if(pq.size() > k)pq.pop();
        }
        return pq.top();
    }
};



/*
sb else code - better tc 
class Solution {
public:

void build_max_heap(vector<int>&nums,int idx){

int mx=idx;

int lf=2*idx+1;
int rt=2*idx+2;

if(lf<nums.size()){
    if(nums[lf]>nums[mx]) mx=lf;
}
if(rt<nums.size()){
    if(nums[rt]>nums[mx]) mx=rt;
}

if(mx!=idx){
    swap(nums[mx],nums[idx]);
build_max_heap(nums,mx);
}
}
void heapify1(vector<int>&nums, int i, int &siz) {

	int mn = i;
	int lfi = 2 * i + 1;
	int rti = 2 * i + 2;

	if (lfi < siz && nums[mn] < nums[lfi]) {
		mn = lfi;
	}
	if (rti < siz && nums[mn] < nums[rti]) mn = rti;

	if (mn != i) {
		swap(nums[i], nums[mn]);
		heapify1(nums, mn,siz);
	}
}

void find(vector<int>&nums, int &siz) {

	swap(nums[0], nums[siz - 1]);
	siz--;
	heapify1(nums, 0, siz);
}

    int findKthLargest(vector<int>& nums, int k) {

        int n=nums.size();

        for(int i=n/2-1;i>=0;i--){
           build_max_heap(nums,i);
        }
        int siz = nums.size();
k--;
	while (siz > n-k) {
		find(nums, siz);
	}
        
     return nums[0];
        
    }
};



*/