#include <bits/stdc++.h>
vector<pair<char, int>> duplicate_char(string s, int n)
{
    // Write your code here.
    map<int, int> un;
    vector<pair<char, int>> p;
    for (int i = 0; i < n; i++)
    {
        un[s[i]]++;
    }
    for (auto it : un)
    {
        if (it.second > 1)
        {
            p.push_back(make_pair(it.first, it.second));
        }
    }
    return p;
}