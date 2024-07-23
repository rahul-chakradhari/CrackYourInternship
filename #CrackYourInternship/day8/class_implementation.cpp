#include <iostream>
using namespace std;
class Hero
{
    // properties/data members
private:
    int health;

public:
    char level;
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void gethealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    Hero x;
    x.sethealth(50);
    x.level = 'a';
    // cout << "size:" << sizeof(x) << endl;
    cout << "health:" << x.gethealth() << endl;
    cout << "level:" << x.level << endl;

    return 0;
}