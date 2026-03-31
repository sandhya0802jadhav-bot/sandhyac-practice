#include <iostream>
using namespace std;


inline int square(int a)
{
    return a * a;
}


inline int cube(int a)
{
    return a * a * a;
}

int main()
{
    cout << "sq of no: " << square(5) << endl;
    cout << "cube of no: " << cube(2) << endl;
    
    return 0;
}
