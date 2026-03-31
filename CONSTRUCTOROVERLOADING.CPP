#include <iostream>
using namespace std;

class add
{
public:
    
    add()
    {
        cout << "Default constructor called" << endl;
    }

    
    add(int a, int b)
    {
        int c = a + b;
        cout << "sum = " << c << endl;
    }
};

int main()
{
    add obj1;         
    add obj2(10, 20);  

    return 0;
}
