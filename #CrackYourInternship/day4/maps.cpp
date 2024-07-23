#include <iostream>
#include <map>

int main()
{
    std::map<std::string, int> m;

    m["mera"] = 2;
    m["babbar"] = 3;
    m["name"] = 1;

    for (auto i : m)
    {
        std::cout << i.first << "-->" << i.second << std::endl;
    }

    return 0;
}
