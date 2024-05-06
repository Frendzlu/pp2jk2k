#include <iostream>
#include "ComplexNumber.h"
#include "functions.h"
using namespace std;

int main() {
    const ComplexNumber z1(3.0, 1.0);
    const ComplexNumber z2(3.0, 1.0);

    auto result =  z1.add(z2);
    result.print();
    result = z1.add(4.0);
    result.im(10.);
    result.print();

    z1.operator+(z2).print();

    (z1 + z2).print();
    (z1 - z2).print();
    (-z1).print();

    (z1 + 4.0).print();
    (4.0 + z1).print();

    std::cout << z1 << std::endl;

    return 0;
}
