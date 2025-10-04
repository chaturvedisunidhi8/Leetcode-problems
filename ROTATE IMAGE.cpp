//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        

        int n = matrix[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]); // OK
            }
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= n/2; j++) {  
                swap(matrix[i][j], matrix[i][n-j-1]);
            }
        }
    }
};













    
