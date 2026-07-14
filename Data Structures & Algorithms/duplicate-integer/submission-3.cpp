class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> unique_numbers;
        for (const int& item: nums) 
        {
            if (auto foundItem = unique_numbers.find(item); foundItem != unique_numbers.end()) {
               return true;
            } else {
                unique_numbers[item] = item;;
            }
        }
        return false;
    }
};