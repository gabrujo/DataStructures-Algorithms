class Solution {
public:
     bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        
        for (auto item : nums) {
            if (check.find(item)!=check.end()) {
                return true;
            } else {
                check.insert(item);
            }
        }
        
        return false;
     }
