class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;

        while(n){
            int r = n%10;
            ans.push_back(r);
            n = n/10;
        }
        sort(ans.begin(), ans.end());
        int l = ans.size();
        return ans[l-1]*ans[l-2];
    }
};