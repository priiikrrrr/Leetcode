class Solution {
public:
//TC => O(n)
    int kthGrammar(int n, int k) {
        if(n == 1)return 0;
        if((k % 2 == 0)){
            //flip answer from root at (k/2)
            int prevAns = kthGrammar(n-1,k/2);
            if(prevAns == 0) return 1;
            else return 0;
        }else{
            // k is odd
            int prevAns = kthGrammar(n-1,k/2+1);
            //same ans from root , at (k/2 + 1)
            return prevAns;
        }
    }
};