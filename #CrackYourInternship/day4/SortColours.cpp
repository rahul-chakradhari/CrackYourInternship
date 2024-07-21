#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int count0 = 0, count1 = 0, count2 = 0;

        // Count the occurrences of each color
        for (int num : nums)
        {
            if (num == 0)
            {
                count0++;
            }
            else if (num == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }

        // Reconstruct the nums array based on counts
        int index = 0;
        for (int i = 0; i < count0; i++)
        {
            nums[index++] = 0;
        }
        for (int i = 0; i < count1; i++)
        {
            nums[index++] = 1;
        }
        for (int i = 0; i < count2; i++)
        {
            nums[index++] = 2;
        }
    }
};
