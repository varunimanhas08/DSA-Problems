class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;
        int high = 0;

        for (char c : s) {
            if (c == '(') {
                low++;
                high++;
            }
            else if (c == ')') {
                low--;
                high--;
            }
            else {  // '*'
                low--;   // '*' can act as ')'
                high++;  // '*' can act as '('
            }

            // Even the maximum possible opens became negative
            if (high < 0)
                return false;

            // Minimum cannot be negative
            low = max(low, 0);
        }

        // If 0 opens is possible at the end, string is valid
        return low == 0;
    }
};