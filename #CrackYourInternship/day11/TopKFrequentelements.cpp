class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        // unordered map me frequency dal do  O(N)
        unordered_map<int, int> um;
        for (int num : nums)
        {
            um[num]++;
        }
        // vector me pair bnao fir bola hai kon kon kitna kitna aaya pair me bna liya taki aasani ho
        // freq pehle aana chiye fir element isliye second pehle fir first  O(M)
        vector<pair<int, int>> p;
        for (const auto &v : um)
        {
            p.push_back({v.second, v.first});
        }
        // fir ulta sort kr lo frequency ke hisab se descending order me  0(m log m)
        sort(p.begin(), p.end(), greater<pair<int, int>>());
        // vector me hai second value wo number hai to usko print kr liya  O(K)
        vector<int> vt;
        for (int i = 0; i < k; i++)
        {
            vt.push_back(p[i].second);
        }
        return vt;
    } // overall complexity O(nlogn)
};