class MedianFinder {
public:
    priority_queue<int>leftMax;
    priority_queue<int, vector<int>, greater<int>>rightMin;
    // int num;
    MedianFinder() {}
    
    void addNum(int num) {
        //if maxheap is empty or the number present in the array is smaller than the number present in top of maxheap : add the num inmax heap
        //otherwise add in minheap
        if(leftMax.empty() || num < leftMax.top())leftMax.push(num);
        else rightMin.push(num);

        if(abs((int)leftMax.size() - (int)rightMin.size()) > 1){   //maintain only one differnce btw the two heaps
            rightMin.push(leftMax.top());           //agar exceed krra hai diff then push maxheap's top ele to minHeap.
            leftMax.pop();                          //pop the ele from max heap.
        }else if(leftMax.size() < rightMin.size()){
            leftMax.push(rightMin.top());  //as the size of the minheap > maxheap : pop the top ele of min heap & push it in the maxheap
            rightMin.pop();                //pop the ele from min heap.  
        }
    }
    
    double findMedian() {
        //agar even number of elements hain by the time we are calling median
        if(leftMax.size() == rightMin.size())return (double)(leftMax.top() + rightMin.top())/2;

        //agar odd number of elements hain by the time we are calling median
        else return leftMax.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */