//
// Created by kuba on 22.04.24.
//

#include "Shape.h"
std::ostream &operator<<(std::ostream &os, const Shape &s) {
    os << "Class: " << s.name() << "\nPerimeter: " << s.perimeter() << "\nSurface area: " << s.surfaceArea() << std::endl;
    return os;
}