//Given n pairs of parentheses, write a function to generate all combinations of well-formed parenthesesclass Solution {
public:
    vector<string> result;

    void solve(int open, int close, string current) {
        // If no more brackets left → valid combination
        if (open == 0 && close == 0) {
            result.push_back(current);
            return;
        }

        // Add '(' if available
        if (open > 0)
            solve(open - 1, close, current + "(");

        // Add ')' only if closing brackets > opening (to maintain balance)
        if (close > open)
            solve(open, close - 1, current + ")");
    }

    vector<string> generateParenthesis(int n) {
        solve(n, n, "");
        return result;
    }
};
.

