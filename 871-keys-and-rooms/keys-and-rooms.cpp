class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int>st; //to store visited rooms
        queue<int>q;
        q.push(0);
        st.insert(0);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(int neigh : rooms[curr]){ //0th room mein jo bhi keys given hai
                if(st.count(neigh) == 0){//agar wo key visited nhi hai
                    q.push(neigh);//save in q
                    st.insert(neigh);//mark visited
                }
            }
        }
        return st.size() == rooms.size();
    }
};