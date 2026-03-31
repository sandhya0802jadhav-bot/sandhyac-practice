#include <iostream>
#include <string>
using namespace std;

int main() {
    int billno;
    string customername;
    int fooditems;
    float cost;
    float totalbill;

    cout << "Enter bill no: ";
    cin >> billno;

    cout << "Enter customer name: ";
    cin >> customername;

    cout << "Enter number of food items: ";
    cin >> fooditems;

    cout << "Enter the cost per item: ";
    cin >> cost;

    // Calculate total bill
    totalbill = fooditems * cost;

    cout << "Bill No: " << billno;
    cout << "Customer Name: " << customername;
    cout << "Food Items: " << fooditems;
    cout << "Cost per Item: " << cost;
    cout << "Total Bill: " << totalbill;

    return 0;
}
