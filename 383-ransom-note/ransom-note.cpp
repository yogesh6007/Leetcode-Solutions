class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char,int> hm1;
        unordered_map <char,int> hm2;
        for (char ch : ransomNote){
            hm1[ch]++;
        }
        for (char ch : magazine){
            hm2[ch]++;
        }
        for ( char ch : ransomNote){
            if (hm1[ch]>hm2[ch]){
                return false;
            }
        }
        return true;
    }

};