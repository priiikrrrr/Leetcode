class MinStack {
public:
    stack<int>st;
    stack<int>helper;
    MinStack() {//constructor   
    }
    void push(int val) {//O(1)
        st.push(val);
        //agar helper empty hai toh jo value hai wo as it is push ho jayegi 
        //agar value badi h toh, jo alr existing value hai stack mein , 
        //ussi ko wapis push krdo
        if(helper.size() == 0 || val < helper.top()) helper.push(val);
        else helper.push(helper.top());
    }
    
    void pop() { //O(1)
        st.pop();
        helper.pop();
    }
    
    int top() {//O(1)
        return st.top();
    }
    
    int getMin() {//O(1)
        return helper.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

 /*
getMin()-> brute force approach Using extra stack that will always have  the same   number of ele as your given st 

 
 */