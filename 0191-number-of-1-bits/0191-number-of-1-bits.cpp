class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        unsigned int un = static_cast<unsigned int>(n);
        while (un) {
            un &= (un - 1); // clears the lowest set bit
            count++;
        }
        return count;
    }
};