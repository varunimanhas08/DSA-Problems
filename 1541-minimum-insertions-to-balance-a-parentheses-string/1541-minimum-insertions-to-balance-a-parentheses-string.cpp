class Solution {
public:
    int minInsertions(string s) {
        int open = 0;
        int insertions = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                open++;
            } 
            else {
                // Check if the next character is also ')'
                if (i + 1 < s.length() && s[i + 1] == ')') {
                    i++;  // Consume the second ')'
                } 
                else {
                    insertions++;  // Insert one ')'
                }

                if (open > 0) {
                    open--;
                } 
                else {
                    insertions++;  // Insert one '('
                }
            }
        }

        // Each unmatched '(' requires two ')'
        insertions += open * 2;

        return insertions;
    }
};