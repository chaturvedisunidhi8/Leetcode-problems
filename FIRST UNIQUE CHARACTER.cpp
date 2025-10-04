//Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.



class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> vis(26, -1);
        for (int i = 0; i < s.length(); i++) {
            int idx = s[i] - 'a';
            if (vis[idx] == -1) {
                vis[idx] = i;
            } else {
                vis[idx] = -2;
            }
        }
        int minindex = INT_MAX;
        for (int i = 0; i < 26; i++) {
            if (vis[i] >= 0) {
                minindex = min(minindex, vis[i]);
            }
        }
        return (minindex == INT_MAX) ? -1 : minindex;
    }
};
