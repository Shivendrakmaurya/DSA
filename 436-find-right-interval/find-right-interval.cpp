class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();

        vector<pair<int, int>> starts;

        // Store start and original index
        for (int i = 0; i < n; i++) {
            starts.push_back({intervals[i][0], i});
        }

        sort(starts.begin(), starts.end());

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int end = intervals[i][1];

            int st = 0, ed = n - 1;
            int idx = -1;

            while (st <= ed) {
                int mid = st + (ed - st) / 2;

                if (starts[mid].first >= end) {
                    idx = starts[mid].second;
                    ed = mid - 1;
                } else {
                    st = mid + 1;
                }
            }

            ans[i] = idx;
        }

        return ans;
    }
};