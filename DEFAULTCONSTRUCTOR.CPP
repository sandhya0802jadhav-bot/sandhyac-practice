#include <iostream>
#include <string>
using namespace std;

class GFG
{
    string name;
    int roll;

public:
    GFG()
    {
        name = "ABC";
        roll = 45;
        cout << "Default constructor called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << " Roll: " << roll << endl;
    }
};

int main()
{
    GFG s1;
    s1.display();
    return 0;
}
