class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size() == 1) {return nums;}
        vector<int> a;
        unordered_map<int, int> m;
        unordered_set<int> s;

        for (int num : nums){
            m[num] += 1;
            if (m[num] != 1){s.insert(num);}
            else {s.erase(num);}
        }

        for(auto i : s){
            a.push_back(i);
        }
        return a;

    }
};
