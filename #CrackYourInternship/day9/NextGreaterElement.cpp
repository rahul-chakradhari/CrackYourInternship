class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> v;
        stack<int> s;
        unordered_map<int, int> un;
        for (int num : nums2)
        {
            while (!s.empty() && num > s.top())
            {
                un[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }
        while (!s.empty())
        {
            un[s.top()] = -1;
            s.pop();
        }
        for (int num : nums1)
        {
            v.push_back(un[num]);
        }
        return v;
    }
};