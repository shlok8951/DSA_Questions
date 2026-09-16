/*
Problem -> Given the coordinates of line and check the line is straight.
 */ 

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
       
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];
        
      for(int i =2;i<n;i++){
        int x2 = coordinates[i][0];
        int y2 = coordinates[i][1];
       if((long long)(y2-y1)*(x1-x0) != (long long)(x2-x1)*(y1-y0))return false;
        
      }
      return true;
        
    }
};
