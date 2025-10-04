//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

//Given a string s, return true if it is a palindrome, or false otherwise.


class Solution {
public:
    bool isAlphanumeric(char ch) {
        if ((ch >= '0' && ch <= '9') || 
            (ch >= 'a' && ch <= 'z') || 
            (ch >= 'A' && ch <= 'Z')) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;

        while (st < end) {
            while (st < end && !isAlphanumeric(s[st])) {
                st++;
            }

            while (st < end && !isAlphanumeric(s[end])) {
                end--;
            }

            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            st++;
            end--;
        }

        return true;
    }
};
