class Solution {
public:
    string removeOuterParentheses(string s) {
        int start=0;
        string ans="";
        int count=0;
        int n=s.size();
        for (int i=0;i<n;i++){
            if (s[i]=='('){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                ans+=s.substr(start+1,i-start-1);
                start=i+1;
            }
        }
        return ans;
    }
};