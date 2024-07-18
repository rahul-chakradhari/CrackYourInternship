class Solution
{
public:
    int minMoves2(std::vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        int median = nums[nums.size() / 2];
        int moves = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            moves += std::abs(nums[i] - median);
        }

        return moves;
    }
};