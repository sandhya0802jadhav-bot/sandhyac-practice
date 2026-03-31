#include <iostream>
using namespace std;

class Complex {
private:
    int real, img;

public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    // Operator overloading
    Complex operator + (const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    // Display function
    void display() {
        cout << real << " + i" << img << endl;
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3;

    c3 = c1 + c2;

    cout << "Result: ";
    c3.display();

    return 0;
}
