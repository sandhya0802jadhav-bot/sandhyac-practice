#include <iostream>
#include <string>
using namespace std;

class fysoc {
public:
    string name;
    string enrollmentno;
    string department;
    long long mobileno;   
};

int main()
{
    fysoc f;   
    int i;

    for (i = 0; i < 5; i++)
    {
        cout << "Enter name: ";
        cin >> f.name;

        cout << "Enter enrollment no: ";
        cin >> f.enrollmentno;

        cout << "Enter department: ";
        cin >> f.department;

        cout << "Enter mobile no: ";
        cin >> f.mobileno;

        cout << "Details:";
        cout << f.name << " "
             << f.enrollmentno << " "
             << f.department << " "
             << f.mobileno << endl;
    }

    return 0;
}
