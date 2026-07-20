class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         int rows = grid.size();
        int cols = grid[0].size();
        int ans = 0;
        for (int i = 0; i < rows; i++) {
            int st = 0, end = cols - 1;
            int firstNegative = cols;
            while (st <= end) {
                int mid = st + (end - st) / 2;
                if (grid[i][mid] < 0) {
                    firstNegative = mid;
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            }
            ans += (cols - firstNegative);
        }
        return ans;
    }
};