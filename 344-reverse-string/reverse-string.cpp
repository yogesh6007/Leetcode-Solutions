class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int r=n;
        for (int i=0;i<(n/2);i++){
            char temp=s[i];
            s[i]=s[r-1];
            s[r-1]=temp;
            r--;
        }

        
    }
};