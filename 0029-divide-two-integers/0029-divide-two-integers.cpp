class Solution {
public:
    int divide(int dividend, int divisor) {

        // Overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Determine sign of answer
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Convert to long long to handle INT_MIN
        long long a = dividend;
        long long b = divisor;

        a = abs(a);
        b = abs(b);

        long long quotient = 0;

        // Subtract divisor using powers of 2
        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

            while (a >= (temp << 1)) {
                temp = temp << 1;
                multiple = multiple << 1;
            }

            a = a - temp;
            quotient = quotient + multiple;
        }

        if (negative)
            quotient = -quotient;

        // 32-bit range check
        if (quotient > INT_MAX)
            return INT_MAX;

        if (quotient < INT_MIN)
            return INT_MIN;

        return (int)quotient;
    }
};