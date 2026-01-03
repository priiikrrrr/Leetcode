class Solution {
public:
    // via MIK
    vector<vector<int>> t;
    int mod = 1e9 + 7;
    string states[12] = {"RYG", "RGY", "RYR", "RGR", "YRG", "YGR",
                         "YGY", "YRY", "GRY", "GYR", "GRG", "GYG"};

    int solve(int n, int prev) {
        if (n == 0)
            return 1;

        if (t[n][prev] != -1)
            return t[n][prev];
        int res = 0;
        string lst = states[prev];

        for (int curr = 0; curr < 12; curr++) {
            if (curr == prev)
                continue;
            string currPattern = states[curr];
            bool flag = false;

            for (int col = 0; col < 3; col++) {
                if (currPattern[col] == lst[col]) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                res = (res + solve(n - 1, curr)) % mod;
            }
        }
        return t[n][prev] = res;
    }
    int numOfWays(int n) {
        t.resize(n, vector<int>(12, -1));
        int res = 0;
        for (int i = 0; i < 12; i++) {
            res = (res + solve(n - 1, i)) % mod;
        }
        return res;
    }
};