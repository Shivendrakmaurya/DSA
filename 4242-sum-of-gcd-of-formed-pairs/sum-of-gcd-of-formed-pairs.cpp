class Solution {
public:

    int gcd(int a, int b){
            if(b==0)
                return a;
                return gcd(b,a%b);
            
    }
    long long gcdSum(vector<int>& nums) {
      int n = nums.size();

      vector<int> prefixGcd(n);

      int maxElement = nums[0];
      
      for (int i=0; i<n; i++) {
            maxElement = max(maxElement, nums[i]);
            prefixGcd[i] = gcd(nums[i], maxElement);
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        long long sum = 0;

        int i = 0;
        int j = n - 1;

         while (i <j) {
            sum += gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }
        return sum;

     } 
};