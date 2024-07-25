class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        // pehle vector bna lo
        vector<int> result(n, 1);
        // fir left side or right side lelo
        int left = 1;
        int right = 1;
        // left traverse kro
        for (int i = 0; i < n; i++)
        {
            result[i] = result[i] * left;
            left = left * nums[i];
        }
        // right traverse kro or usme left traverse ki values multiply kro
        for (int i = n - 1; i >= 0; i--)
        {
            result[i] = result[i] * right;
            right = right * nums[i];
        }
        return result;
    }
};