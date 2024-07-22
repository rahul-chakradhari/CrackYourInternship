class Solution
{
public:
    long long findMinDiff(std::vector<long long> a, long long n, long long m)
    {
        // Sort the array
        std::sort(a.begin(), a.end());
        long long res = LLONG_MAX;

        for (long long i = 0; i <= n - m; i++)
        {
            long long d = a[i + m - 1] - a[i];
            res = std::min(res, d);
        }

        return res;
    }
};