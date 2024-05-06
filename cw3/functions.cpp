//
// Created by kuba on 11.03.24.
//

#include "functions.h"

ComplexNumber operator+(const double &v, const ComplexNumber& cn) {
    return cn + v;
}


std::ostream& operator<<(std::ostream& stream, const ComplexNumber& cn) {
    stream << cn.re() << " + " << cn.im() << "i";
    return stream;
}