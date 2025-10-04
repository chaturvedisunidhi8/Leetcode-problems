//Given two binary strings a and b, return their sum as a binary string.

class Solution {
public:
    string addBinary(string& a, string& b) {
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        string result = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            result = char((sum % 2) + '0') + result;
            carry = sum / 2;
        }

        
        int pos = 0;
        while (pos < result.size() - 1 && result[pos] == '0') {
            pos++;
        }

        return result.substr(pos);
    }
};

