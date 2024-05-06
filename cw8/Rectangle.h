//
// Created by kuba on 22.04.24.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"


class Rectangle: public Shape {
private:
    double _height;
    double _width;
public:
    Rectangle(): _height(0.0), _width(0.0) {}
    Rectangle(const double height, const double width): _height(height), _width(width) {}

    double perimeter() const override;
    double surfaceArea() const override;
    std::string name() const override;
};



#endif //RECTANGLE_H
