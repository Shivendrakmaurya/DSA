class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int m=mat.size(), n=mat[0].size();
        int left = 0,right = (m*n)-1;
        
        while (left <= right) {
            int mid = left+(right-left)/2;
            int midVal = mat[mid/n][mid % n];

            if (midVal==target) {
                return true;
            } else if (midVal<target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return false;
    }
};
