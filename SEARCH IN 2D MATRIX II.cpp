/*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

int n=matrix.size();
        if(n==0) return false;
        
        int m=matrix[0].size();
        if(m==0) return false;
        
    for( int i=0;i<n;i++){
        int low=0,high=m-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[i][mid]==target){
                return true;
            }
            else if(matrix[i][mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
      return false;  
        
    }
};
