class Solution {
public:
    string toLowerCase(string s) {
        string lower="";
        int c=s.size();
        for(int i=0;i<c;i++){
            lower += tolower(s[i]);
        }
        return lower;
    }
};