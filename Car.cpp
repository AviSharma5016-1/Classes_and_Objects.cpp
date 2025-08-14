#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;
};

int main() {
    Car c;
    cout << "Enter car brand: ";
    getline(cin, c.brand);
    cout << "Enter manufacturing year: ";
    cin >> c.year;
    cout << "\nCar Details:\n";
    cout << "Brand: " << c.brand << endl;
    cout << "Year: " << c.year << endl;
    return 0;
}

/*OUTPUT
Enter car brand: BMW
Enter manufacturing year: 2016

Car Details:
Brand: BMW
Year: 2016
*/
