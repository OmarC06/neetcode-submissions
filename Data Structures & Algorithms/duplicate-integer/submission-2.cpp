class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> numbers;
        for (int num : nums) {
            numbers.insert(num);
        }    

        if (nums.size() != numbers.size()){
            return true;
        } else {return false;}
    }
};