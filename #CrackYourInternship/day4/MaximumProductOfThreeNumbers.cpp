#include <vector>
#include <algorithm>

class Solution
{
public:
    int maximumProduct(std::vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
        {
            return 0;
        }

        std::sort(nums.begin(), nums.end());

        int product1 = nums[n - 1] * nums[n - 2] * nums[n - 3];

        int product2 = nums[0] * nums[1] * nums[n - 1];

        return std::max(product1, product2);
    }
};
