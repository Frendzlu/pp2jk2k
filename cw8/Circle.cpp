//
// Created by kuba on 22.04.24.
//

#include "Circle.h"
#include <numbers>

double Circle::perimeter() const {
    return 2 * std::numbers::pi * _radius;
}

double Circle::surfaceArea() const {
    return std::numbers::pi * _radius*_radius;
}

std::string Circle::name() const {
    return "Circle";
}
