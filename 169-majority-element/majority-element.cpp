class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> num;
        for (int i = 0;i  < nums.size(); i++){
            num[nums[i]]++;
        }
        for (auto [key,value] : num){
            if (value > (n/2)){
                return key;
            }
        }
        return 0;
    }
};