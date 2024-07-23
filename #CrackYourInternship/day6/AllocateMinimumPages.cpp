class Solution
{
private:
    bool isPossible(int arr[], int n, int m, int mid)
    {
        int count = 1;
        int pagesum = 0;
        for (int i = 0; i < n; ++i)
        {
            if (pagesum + arr[i] > mid)
            {
                count++;
                pagesum = arr[i];
            }
            else
            {
                pagesum += arr[i];
            }
            if (count > m || arr[i] > mid)
            {
                return false;
            }
        }
        return true;
    }

public:
    long long findPages(int n, int arr[], int m)
    {
        if (n < m)
        {
            return -1;
        }
        int start = 0;
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += arr[i];
        }
        int end = sum;
        int ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (isPossible(arr, n, m, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
