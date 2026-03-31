#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived d;

    basePtr = &d;

    basePtr->display();  // Calls derived class function

    return 0;
}
