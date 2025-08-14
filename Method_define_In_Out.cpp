#include <iostream>
using namespace std;

class Reverse {
public:
    int arr[5]; 

    void inputArray() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

   void reverseArray();
};


void Reverse::reverseArray() {
    cout << "Reversed array: ";
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Reverse obj;

    obj.inputArray();   
    obj.reverseArray(); 

    return 0;
}

/*OUTPUT
Enter 5 elements: 1 2 3 4 5
Reversed array: 5 4 3 2 1 
*/
