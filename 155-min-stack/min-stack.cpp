class MinStack {
public:
/*
NO ex ds is used - just dummy variables 
SC O(1), TC O(1)
*/  
    stack<long long>st;
    long long min ;
    MinStack() {//constructor   
        min = LLONG_MAX;
    }
    void push(int val) {//O(1)
    long long x = (long long)val;
        if(st.size() == 0){
            st.push(x);
            min = x;
        }
        else if(x >= min)st.push(x);
        else{//val < min
            st.push(2*x - min);//checkmark min
            min = x;

        }
    }
    
    void pop() { //O(1)
        if(st.top() >= min)st.pop();
        else{
            //st.top() < min -> checkmark value is here, i.e before popping the top ele , we have to retrive the prev min  & update the curr to prev min
            long long oldMin = 2*min - st.top();
            min = oldMin;
            st.pop();
        }
    }
    
    int top() {//O(1)
        if(st.top() < min)return (int)min;
        else return (int)(st.top());
    }
    
    int getMin() {//O(1)
        return (int)min;
    }
};
/*
vector ko as stack implement karo & each time you call get min -> O(n)
you have to traverse the entire vector
SC O(1), TC O(n)
    vector<int>v;
    MinStack() {//constructor   
    }
    void push(int val) {//O(1)
        v.push_back(val);
    }
    
    void pop() { //O(1)
        v.pop_back();
    }
    
    int top() {//O(1)
        return v[v.size() - 1];
    }
    
    int getMin() {//O(n)
        int mn = v[0];
        for(int i = 1 ; i < v.size() ; i++){
            mn = min(mn, v[i]);
        }
        return mn;
    }
};
*/



/*
METHOD 2 - using extra stack that will always have the same no. of ele as the "st"
TC O(1) SC O(n)
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
*/



/*
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

 /*
getMin()-> brute force approach Using extra stack :TLE
    getMin(){
        stack<int>helper;
        int mn = INT_MAX;
        while(st.size() > 0){
            mn = min(mn, st.top());
            helper.push(st.top());
            st.pop();
        }
        while(helper.size() > 0){
            st.push(helper.top());
            helper.pop();
        }
        return mn;
    }
 */