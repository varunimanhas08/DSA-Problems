class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int, greater<int>> s(nums.begin(), nums.end()); // sorted descending, duplicates removed
        
        auto it = s.begin();
        int count = 1;
        while (count < 3 && next(it) != s.end()) {
            it++;
            count++;
        }
        
        if (count == 3) return *it;   // found third max
        return *s.begin();            // else return the max
    }
};