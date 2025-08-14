#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
};

int main() {
    Student s;
    cout << "Enter student name: ";
    getline(cin, s.name);
    cout << "Enter student age: ";
    cin >> s.age;
    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    return 0;
}

/*OUTPUT
Enter student name: Avi Sharma
Enter student age: 20

Student Details:
Name: Avi Sharma
Age: 20
*/
