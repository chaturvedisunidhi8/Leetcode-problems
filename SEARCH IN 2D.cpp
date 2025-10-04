/*You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.*/

 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
int rows=matrix.size();
        if(rows==0) return false;
        int cols=matrix[0].size();
        
        int i=0,j=cols-1;
        
        while(i<rows && j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;




    }
};
