class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        // edge case
        if (n == 0)
        {
            return " ";
        }
        // pehle empty string lo
        string ans = "";
        // fir sort kro
        sort(begin(strs), end(strs));
        // fir 1st index lo array of strings ka
        string a = strs[0];
        // now last index lo
        string b = strs[n - 1];
        // fir check kro
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[i])
            {
                ans = ans + b[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};