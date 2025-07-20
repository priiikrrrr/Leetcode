class Solution {
public:
//!redo
    string predictPartyVictory(string senate) {
        queue<int>q;
        queue<int>r;
        queue<int>d;
        for(int i = 0 ; i < senate.length() ; i++){
            q.push(i);
            if(senate[i] == 'R')r.push(i);
            else d.push(i);
            // if(senate[i] == 'D')d.push(i);
        }
        // for(int i = 0 ; i < senate.length() ; i++){
        // }
        // for(int i = 0 ; i < senate.length() ; i++){
        // }
        // int i = 0;
        while(q.size() > 1){
            if(senate[q.front()] == 'X')q.pop();
            else if(senate[q.front()] == 'R'){
                if(d.size() == 0) return "Radiant";
                else{
                    // (d.size() > 0)
                    senate[d.front()] = 'X';
                    d.pop();
                    int x = q.front();
                    q.pop();
                    q.push(x); 
                    int y = r.front();
                    r.pop();
                    r.push(y);
                }
                // i++;
            }
            // else if(senate[q.front()] == 'X')i++;
            else{
                // (senate[q.front()] == 'D'){
                if(r.size() == 0) return "Dire";
                else {
                    // (r.size() > 0){
                    senate[r.front()] = 'X';
                    r.pop();
                    int x = q.front();
                    q.push(x); 
                    q.pop();
                    int y = d.front();
                    d.push(y);
                    d.pop();
                }
            }
        }
        if(senate[q.front()] == 'R') return "Radiant";
        else return "Dire";
    }

};