#include <iostream>
using namespace std;

class Box {
    float length;

public:
    
    Box(float l) {
        length = l;
    }

    
    friend float findlength(Box b);
};


float findlength(Box b) {
    return b.length;
}

int main() {
    Box b1(10.5);

    cout << "Length of box: " << findlength(b1);

    return 0;
}
