class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> alreadySeenPair;

        for (int i {0}; i < nums.size(); i++)
        {
            // 7 - 3 = 4
            // 7 - 4 = 3
            int combinationPair = target - nums[i];
            if (auto seen = alreadySeenPair.find(combinationPair); seen != alreadySeenPair.end()) 
            {
                return {seen->second, i};
            } else {
                // {4: 0}
                // {3: 1}
                alreadySeenPair[nums[i]] = i;
            }
        }
        return {};
    }
};
