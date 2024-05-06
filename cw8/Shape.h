//
// Created by kuba on 22.04.24.
//

#ifndef SHAPE_H
#define SHAPE_H

#include <ostream>


class Shape {
public:
    virtual double perimeter() const = 0;
    virtual double surfaceArea() const = 0;
    virtual std::string name() const = 0;

};

std::ostream &operator<<(std::ostream &os, const Shape &s);

#endif //SHAPE_H
