class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> num;
        for (int i=0;i<nums.size();i++){
            num[nums[i]]++;
        }
        for (auto [key,value]:num){
            if (value > 1){
                return true;
            }
        }
        return false;
    }
};