class Solution {
public:
    int mypow(int n , int k){
        if(k == 0)return 1;
        int half = mypow(n , k/2);
        if(k % 2 == 0)return half*half;
        else return half * half * n;
    }
    int kthGrammar(int n, int k) {
        //base
        if(n <= 1 && k == 1)return 0;
        //generating mid using expo condition
        int mid = mypow(2,n-1)/2;
        if(k <= mid){
            return kthGrammar(n-1,k);
        }else{
            return 1 - kthGrammar(n-1, k-mid);
        }
    }
};