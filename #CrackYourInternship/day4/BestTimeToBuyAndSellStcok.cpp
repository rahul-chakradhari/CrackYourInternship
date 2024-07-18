class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.empty())
            return 0;
        int mini = prices[0];
        int maxProfit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < mini)
            {
                mini = prices[i];
            }
            int potentialProfit = prices[i] - mini;
            if (potentialProfit > maxProfit)
            {
                maxProfit = potentialProfit;
            }
        }
        return maxProfit;
    }
};
