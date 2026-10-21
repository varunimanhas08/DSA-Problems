class Solution {
public:
    vector<vector<int>> result;
    vector<int> temp;

    void solve(int start, int k, int n) {
        if (k == 0 && n == 0) {
            result.push_back(temp);
            return;
        }

        if (k == 0 || n <= 0)
            return;

        for (int i = start; i <= 9; i++) {
            temp.push_back(i);

            solve(i + 1, k - 1, n - i);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        solve(1, k, n);
        return result;
    }
};