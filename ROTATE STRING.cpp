//Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp=s+s;
        if(goal.length()==s.length()){
    if(temp.find(goal)!=string::npos){
        return true;
    }
        else{
        return false;
        }
         }
         return false;
    }
    
};
