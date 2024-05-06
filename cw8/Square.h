//
// Created by kuba on 22.04.24.
//

#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"


class Square: public Rectangle{
public:
    Square(): Rectangle() {}
    Square(const double side): Rectangle(side, side) {}

    std::string name() const override;
};



#endif //SQUARE_H
