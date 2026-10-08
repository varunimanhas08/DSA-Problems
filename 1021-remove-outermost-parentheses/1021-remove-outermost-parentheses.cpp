class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int count = 0;

        for (char ch : s) {
            if (ch == '(') {
                // Add '(' only if it is NOT the outermost one
                if (count > 0) {
                    ans += ch;
                }
                count++;
            }
            else {
                count--;

                // Add ')' only if it is NOT the outermost one
                if (count > 0) {
                    ans += ch;
                }
            }
        }

        return ans;
    }
};