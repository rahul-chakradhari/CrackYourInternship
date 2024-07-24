class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {

        // pehle reverse sort krlo
        sort(nums.begin(), nums.end(), greater<int>());

        // return krlo bs kyoki indexing 0 se hoti hai to k-1 dal do
        return nums[k - 1];
    }
};