//
// Created by kuba on 22.04.24.
//

#include "Rectangle.h"

double Rectangle::perimeter() const {
    return _width * 2.0 + _height * 2.0;
}

double Rectangle::surfaceArea() const {
    return _width * _height;
}

std::string Rectangle::name() const {
    return "Rectangle";
}
