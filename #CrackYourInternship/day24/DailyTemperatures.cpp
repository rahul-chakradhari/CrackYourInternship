class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        // stack lelo
        stack<int> s;
        int n = temperatures.size();
        // vector me store kro answer
        vector<int> result(n);
        for (int i = n - 1; i >= 0; i--)
        {
            // jbtrk stack empty na ho or jo element dal re bda ho pop kro
            while (!s.empty() && temperatures[i] >= temperatures[s.top()])
            {
                s.pop();
            }
            // agr empty ho to edge case me 0 aaega
            if (s.empty())
            {
                result[i] = 0;
            }
            // difference daldo
            else
            {
                result[i] = s.top() - i;
            }
            s.push(i);
        }
        return result;
    }
};