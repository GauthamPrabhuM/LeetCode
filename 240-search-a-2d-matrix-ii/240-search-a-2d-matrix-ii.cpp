class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++){
          if(lower_bound(matrix[i].begin(), matrix[i].end(), target)==matrix[i].end())continue;
          int x=*lower_bound(matrix[i].begin(), matrix[i].end(), target);
          if(x==target)
              return true;
          
        }
        return false;
        
    }
};