class Solution {
public:
    int minimumSum(int num) {
        int ones = num % 10;
        num = num/10;
        int tens = num%10;
        num = num/10;
        int huns = num % 10;
        num = num/10;
        int thous = num %10;
        num = num/10;
        vector<int>v = {ones,tens,huns,thous};
        sort(v.begin(),v.end());//0049

        int nu1= v[0];
        nu1 *= 10;
        nu1 += v[2];
        int nu2 = v[1];
        nu2 *= 10;
        nu2 += v[3];
        return nu1+ nu2;

    }
};