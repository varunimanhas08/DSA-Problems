class Solution {
public:
    int maxProduct(vector<string>& words) {
        int maxi = 0;

        for(int i = 0; i < words.size(); i++) {
            for(int j = i + 1; j < words.size(); j++) {

                int freq[26] = {0};

                // Mark all characters of first word
                for(int k = 0; k < words[i].length(); k++) {
                    freq[words[i][k] - 'a'] = 1;
                }

                // Check whether second word shares any character
                bool flag = true;

                for(int k = 0; k < words[j].length(); k++) {
                    if(freq[words[j][k] - 'a'] == 1) {
                        flag = false;
                        break;
                    }
                }

                // If no common character, calculate product
                if(flag) {
                    int product = words[i].length() * words[j].length();
                    maxi = max(maxi, product);
                }
            }
        }

        return maxi;
    }
};