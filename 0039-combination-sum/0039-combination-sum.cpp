class Solution {
public:
    void solve(vector<int>& candidates, int target, int start,
               vector<int>& current, vector<vector<int>>& result) {
        
        // Base case
        if (target == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            
            if (candidates[i] > target)
                continue;

            // Choose
            current.push_back(candidates[i]);

            // Reuse the same number
            solve(candidates, target - candidates[i], i, current, result);

            // Backtrack
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> result;
        vector<int> current;

        solve(candidates, target, 0, current, result);

        return result;
    }
};