class Solution
{
    // pehle ek function bnao 2 pointers le kr simple sa
private:
    bool isPalindrome(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

public:
    bool validPalindrome(string s)
    {
        // 2 pointer approach ke baad 1 ko starting me or 1 ko last me dal kr check kro bs
        int n = s.length();
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            if (s[i] == s[j])
            {

                i++;
                j--;
            }
            else
            {
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            }
        }
        return true;
    }
};