//Write a function that reverses a string. The input string is given as an array of characters s.
class Solution {
public:
    void reverseString(vector<char>& s) {
    int l=0;
    int r=s.size()-1;
    while(l<r){
   swap(s[l++],s[r--])
    }
    }
};
