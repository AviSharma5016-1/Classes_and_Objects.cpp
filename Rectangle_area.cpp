#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;
    double area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    cout << "Enter length of rectangle: ";
    cin >> r.length;
    cout << "Enter width of rectangle: ";
    cin >> r.width;
    
    if (r.length == r.width){
        cout << "This is a square." << endl;
        cout<<endl;
    }

    
    cout << "\nArea: " << r.area() << endl;
    return 0;
}

/*OUTPUT
Enter length of rectangle: 12
Enter width of rectangle: 12
The rectangle is a square.


Area: 144
*/
