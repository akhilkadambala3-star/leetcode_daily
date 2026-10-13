class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> sq;

        for(int num : nums) {
            long long x = num;
            sq.push_back(x * x);
        }

        sort(sq.begin(), sq.end());

        int n = sq.size();
        long long ans = 0;

        for(int i = 0; i < n; i++) {
            if(i < n / 2)
                ans -= sq[i];
            else
                ans += sq[i];
        }return ans;
    }
};