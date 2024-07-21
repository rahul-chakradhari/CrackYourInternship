class Solution
{
public:
    int findPair(int n, int x, vector<int> &arr)
    {
        // code here
        unordered_set<int> u;
        for (int i = 0; i < n; i++)
        {
            if (u.count(arr[i] + x) || u.count(arr[i] - x))
            {
                return 1;
            }
            u.insert(arr[i]);
        }
        return -1;
    }
};