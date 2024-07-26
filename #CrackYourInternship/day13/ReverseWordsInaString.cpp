class Solution
{
public:
    string reverseWords(string s)
    {
        // stringstream se words me split kro
        stringstream ss(s);
        string word;         // ek ek word ko store kro
        vector<string> temp; // temnp vector bna kr reverse krne me aasani hogi
        string ans;          // ans me dalo

        while (ss >> word)
        {
            temp.push_back(word);
        }

        // reverse kro order of vector ka
        for (int i = temp.size() - 1; i >= 0; i--)
        {
            if (i != temp.size() - 1)
            {
                ans += ' ';
            }
            ans += temp[i];
        }

        return ans;
    }
};