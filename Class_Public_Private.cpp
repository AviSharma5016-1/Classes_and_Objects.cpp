#include <iostream>
using namespace std;

class Cube {
public:
    
    double side;

    Cube(double s) {
        side = s;
        volume = 0;  
    }

    
    double calcVolumeInside() {
        volume = side * side * side;
        return volume;
    }

    
    double getVolume() {
        return volume;
    }

private:
    
    double volume;
};


double calcVolumeOutside(Cube c) {
    return c.side * c.side * c.side;
}

int main() {
    Cube cube1(5);

   
    double volInside = cube1.calcVolumeInside();
    cout << "Volume (Inside class method): " << volInside << endl;

    
    double volOutside = calcVolumeOutside(cube1);
    cout << "Volume (Outside class method): " << volOutside << endl;

    
    cout << "Private volume via getter: " << cube1.getVolume() << endl;

    return 0;
}

/*OUTPUT
Volume (Inside class method): 125
Volume (Outside class method): 125
Private volume via getter: 125
*/
