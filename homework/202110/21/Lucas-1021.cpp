// 2044-count-max-or-subset
// Q: https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/
// Competitive Programmer's Handbook (CPH) - Antti Laaksonen
// https://cses.fi/book/book.pdf
// CH5, P47-48

class Solution {
public:
    // Time: O(2^N * N)
    // Space: O(1)
    // Rank: 53.97%
    /* Steps:               [1, 3], mx = 0
                        v = 1, mx = 0 | 1 = 1
                        v = 3, mx = 1 | 3 = 3
                        
                                  i = 1 0
                                      3 1
                        state = 0 = 0 0 0 = []
                        state = 1 = 0 0 1 = [1]
                        state = 2 = 0 1 0 = [3] 
                        state = 3 = 0 1 1 = [1, 3]
                        
    */
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size(), m = 1 << n, mx = 0, ans = 0;
        for (int v : nums) {
            mx = mx | v;
        }
        
        for (int state = 0; state < m; state ++) {
            int sum = 0;
            for (int i = 0; i < n; i ++) {
                if (state & (1 << i)) {
                    sum |= nums[i];
                }
            }
            if (sum == mx) {
                ans ++;
            }
        }
        return ans;
    }
};
