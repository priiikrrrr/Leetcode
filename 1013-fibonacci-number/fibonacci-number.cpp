class Solution {
public://tc : o(n) sc : o(n)
int fibn(int n , vector<int>&t){
    if(n <= 1)return n;
    if(t[n] != -1) return t[n];
    // int ans =  fibn(n-1) + fibn(n-2);
    // return ans;
    t[n] = fibn(n-1, t) + fibn(n-2, t);
    return t[n];
}
    int fib(int n) {
        vector<int>t(n+1, -1);
        return fibn(n , t);
    }
};