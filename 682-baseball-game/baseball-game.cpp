class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(auto i : operations){
            if( i == "C"){if(!st.empty())st.pop();}
            else if( i == "D"){
                if(!st.empty()){
                int prev = st.top();
                int doub = 2 * prev;
                st.push(doub);
                }
            }
            else if( i == "+"){
                if(!st.empty()){
                int first = st.top();
                st.pop();
                int sec = st.top();
                // st.pop();
                int sum = first + sec;
                // st.push(sec);
                st.push(first);
                st.push(sum);
                }
            }
            else{
                // i is a number 
                int num = stoi(i);
                st.push(num);
            }
        }
        int sumOfOp = 0;
        while(!st.empty()){
            sumOfOp += st.top();
            st.pop();
        }
        return sumOfOp;
        // return st.top();
    }
};