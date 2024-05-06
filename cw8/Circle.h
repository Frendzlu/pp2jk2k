//
// Created by kuba on 22.04.24.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"


class Circle: public Shape {
private:
    double _radius;
public:
    Circle(): _radius(0.0) {}
    Circle(const double radius): _radius(radius) {}

    double perimeter() const override;
    double surfaceArea() const override;
    std::string name() const override;

};



#endif //CIRCLE_H
