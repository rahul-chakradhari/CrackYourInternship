class Solution
{
public:
    map<int, char> mp;
    // constructor ko call kro
    Solution()
    {
        // mapping kr lo
        for (int i = 0; i < 26; ++i)
        {
            mp[i] = 'A' + i;
        }
    }

    string convertToTitle(int columnNumber)
    {
        string ans;
        // sahi caees tk chalao
        while (columnNumber > 0)
        {
            // 0 based indexing me change kr lo
            columnNumber--;
            // remainder hi check kr lo
            int x = columnNumber % 26;
            // ans me remainder dal do
            ans = mp[x] + ans;
            // fir se loop chala do
            columnNumber /= 26;
        }
        return ans;
    }
};