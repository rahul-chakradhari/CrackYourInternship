class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> un;
        for (int num : nums)
        {
            un[num]++;
        }
        for (auto &pair : un)
        {
            if (pair.second > n / 2)
            {
                return pair.first;
            }
        }
        return -1;
    }
};