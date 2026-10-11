#include <vector>

using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        const int n = static_cast<int>(nums.size());
        int sum = 0;

        for (int i = 1; i <= n; ++i) {
            if (n % i == 0) {
                sum += nums[i - 1] * nums[i - 1];
            }
        }

        return sum;
    }
};
