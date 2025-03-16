class Solution {
public:
/*
//bad code
void permutationsSequences(vector<string>&v,string final, string original){
    if(original == ""){
        v.push_back(final);
        return;
    }
    for(int i = 0 ; i < original.length() ; i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutationsSequences(v,final + ch, left + right);
    }
}
*/
string permutationsSequences(string str,int k, string empty){
    int n = str.length();
    // if(n == 1){
    //     empty += str;
    //     return empty;
    // }
    if(n == 0) return empty;
    int fact = 1;
    for(int i = 2; i <= n-1 ; i++){
        fact *= i;
    }
    int index = k/fact;
    if(k%fact == 0) index--;
    char ch = str[index];
    string left = str.substr(0 , index);
    string right = str.substr(index+1);
    int q = 1;
    if(k%fact == 0) q = fact;
    else q = k % fact;
    return permutationsSequences((left + right), q , empty + ch);
}
    string getPermutation(int n, int k) {
        string str = "";
        for(int i = 1; i <= n ; i++){
            str += to_string(i);
        }
        return permutationsSequences(str,k,"");

    }
};