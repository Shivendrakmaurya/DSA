class Solution {
public:
    int gcd(int a, int b) {
        int smaller = min(a, b);
        int greater = max(a, b);

        if (greater % smaller == 0)
            return smaller;

        for (int i = smaller - 1; i > 0; i--) {
            if (smaller % i == 0 && greater % i == 0)
                return i;
        }

        return 1;
    }

    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        return gcd(nums[0], nums[n - 1]);
    }
};