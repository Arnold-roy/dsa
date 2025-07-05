#include <bits/stdc++.h>
using namespace std;

class car
{

    string name;
    string color;

public:
    void setColor(string color)
    {
        this->color = color;
    }
    string getColor()
    {
        return this->color;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    car(string n, string c)
    {
        this->name = n;
        this->color = c;
    }
    void printing()
    {
        cout << name << endl;
        cout << color << endl;
    }
};

int main()
{
    car c1 = car("alto", "black");
    c1.printing();

    c1.setColor("copper");
    c1.setName("wagonr");
    c1.printing();
    cout << c1.getName();
    cout << c1.getColor();

    return 0;
}