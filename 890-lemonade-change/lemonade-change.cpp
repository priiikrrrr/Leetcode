class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int five = 0;
        int ten = 0;
        int tw = 0;
        for (int i = 0; i < n; i++) {
            if (bills[i] == 5)
                five++;
            else if (bills[i] == 10) {
                if (five) {
                    five--;
                    ten++;
                } else return false;
            }
            else {
                if (five && ten) {
                    ten--;
                    five--;
                }
                else if(five >= 3){ /*edge rookie*/
                    five -= 3;
                }
                else return false;
            }
        }
        return true;
    }
};