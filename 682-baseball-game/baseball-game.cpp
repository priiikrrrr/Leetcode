class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        for (auto &i : operations) {
            if (i == "+") {
                int tp = record.top(); record.pop();
                int st = record.top(); record.pop();
                int res = tp + st;
                record.push(st);
                record.push(tp);
                record.push(res);
            } else if (i == "D") {
                if (!record.empty()) {
                    int ld = 2 * record.top();
                    record.push(ld);
                }
            } else if (i == "C") {
                if (!record.empty())record.pop();
            } else
                record.push(stoi(i)); // if the operation is numeric
        }
        int sum = 0;
        while(!record.empty()){
            sum += record.top();
            record.pop();
        }
        return sum;
    }
};