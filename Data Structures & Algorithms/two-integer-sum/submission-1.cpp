class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0; 
        int j = 0;
        unordered_map<int, int> hash;
        for(i; i<nums.size();++i){
            if (hash.count(nums[i]) == 0){
                hash[target-nums[i]]=i;}
            else {
                j = hash.at(nums[i]);
                if (i != j){
                    break;
                }
            }
        }
        vector<int> answer = {j, i};
        return answer;
    }
};