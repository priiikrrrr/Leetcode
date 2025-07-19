class Solution {
public:
    int countStudents(vector<int>& arr, vector<int>& brr) {
        int stusize = arr.size();
        int sandsize = brr.size();
        queue<int>q;
        for(int i = 0 ; i < stusize ; i++){
            q.push(arr[i]);
        }
        int count = 0;
        int i = 0;
        while(q.size() > 0 && count != q.size()){
            if(q.front() == brr[i]){
                count = 0;
                q.pop();
                i++;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
    return q.size();
    }
};