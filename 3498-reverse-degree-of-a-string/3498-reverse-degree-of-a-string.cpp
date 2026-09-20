class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            int alphabetPosition = s[i] - 'a' + 1;
            int reversePosition = 26 - alphabetPosition + 1;

            sum += reversePosition * (i + 1);
        }

        return sum;
    }
};