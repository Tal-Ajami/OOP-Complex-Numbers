#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    // Creating complex numbers
    Complex c1(3, 4); // First complex number: 3 + 4i
    Complex c2(1, -2); // Second complex number: 1 - 2i

    // Printing the initial complex numbers
    cout << "Complex Number 1: ";
    c1.print(); // Output: 3 + 4i
    cout << "Complex Number 2: ";
    c2.print(); // Output: 1 - 2i

    // Calculating and printing the radius and angle of the first complex number
    cout << "Radius of c1: " << c1.getRadius() << endl; // Should return sqrt(3^2 + 4^2) = 5
    cout << "Angle of c1: " << c1.getAngle() << " degrees" << endl; // Should return atan2(4, 3)

    // Adding the two complex numbers
    Complex c3 = c1.addNums(c2); // c3 = c1 + c2
    cout << "c1 + c2: ";
    c3.print(); // Output: (3 + 1) + (4 - 2)i = 4 + 2i

    // Subtracting the second complex number from the first
    Complex c4 = c1.subNums(c2); // c4 = c1 - c2
    cout << "c1 - c2: ";
    c4.print(); // Output: (3 - 1) + (4 - (-2))i = 2 + 6i

    // Updating the values of the first complex number
    cout << "Updating c1 to (5, 6)" << endl;
    c1.setNum(5, 6); // Set c1 to 5 + 6i
    c1.print(); // Output: 5 + 6i

    return 0;
}
