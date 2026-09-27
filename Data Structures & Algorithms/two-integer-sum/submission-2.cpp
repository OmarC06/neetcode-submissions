class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0; 
        int j = 0;
        unordered_map<int, int> hash;
        for(i; i<nums.size();++i){
            try {
                j = hash.at(nums[i]);
                break;
                }
            catch (std::out_of_range) {
                hash[target-nums[i]]=i;
                }
            }
        return {j, i};
    }
};