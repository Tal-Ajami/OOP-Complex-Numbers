# Complex Numbers Library (C++)

This project implements a simple **Object-Oriented library for complex numbers** in C++.  
It demonstrates **encapsulation**, **constructors**, and **basic operations** on complex numbers, while keeping the code modular with header (`.h`) and implementation (`.cpp`) files.

---

## Features
- Representation of complex numbers in the form **x + yi**.  
- Multiple constructors (default, parameterized).  
- Encapsulation with private members `_x` and `_y`, managed through **getters and setters**.  
- Utility functions:
  - `print()` → Displays the number in algebraic form.
  - `getRadius()` → Returns the magnitude (√(x² + y²)).
  - `getAngle()` → Returns the angle in polar form (atan2(y, x)).
- Arithmetic operations:
  - `addNums(const Complex&)` → Adds two complex numbers.
  - `subNums(const Complex&)` → Subtracts two complex numbers.

---

## Example Usage
```cpp
#include "Complex.h"

int main() {
    Complex c1(3, 4);   // 3 + 4i
    Complex c2(1, -2);  // 1 - 2i

    c1.print();   // 3 + 4i
    c2.print();   // 1 - 2i

    cout << "Radius of c1: " << c1.getRadius() << endl; 
    cout << "Angle of c1: " << c1.getAngle() << " degrees" << endl;

    Complex sum = c1.addNums(c2);
    cout << "c1 + c2 = "; sum.print();   // 4 + 2i

    Complex diff = c1.subNums(c2);
    cout << "c1 - c2 = "; diff.print();  // 2 + 6i

    return 0;
}
