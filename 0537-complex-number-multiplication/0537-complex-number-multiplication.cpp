class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {

        int a, b, c, d;

        // Extract real and imaginary parts of num1
        int pos1 = num1.find('+');
        a = stoi(num1.substr(0, pos1));
        b = stoi(num1.substr(pos1 + 1, num1.length() - pos1 - 2));

        // Extract real and imaginary parts of num2
        int pos2 = num2.find('+');
        c = stoi(num2.substr(0, pos2));
        d = stoi(num2.substr(pos2 + 1, num2.length() - pos2 - 2));

        // Multiply complex numbers
        int real = (a * c) - (b * d);
        int imaginary = (a * d) + (b * c);

        return to_string(real) + "+" + to_string(imaginary) + "i";
    }
};