#include <iostream>
using namespace std;

int calculate(int a)
{
    return a * a;
}

int calculate(int a, int b)
{
    return a * b;
}

float calculate(float a)
{
    return a * a * a;
}

int main()
{
    int s = 5;

    cout << "sq. of no: " << calculate(s) << endl;
    cout << "Product of no: " << calculate(4, 5) << endl;
    cout << "cube of no: " << calculate(2.5f) << endl;

    return 0;
}
