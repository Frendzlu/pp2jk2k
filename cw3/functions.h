//
// Created by kuba on 11.03.24.
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <ostream>

#include "ComplexNumber.h"

ComplexNumber operator+(const double &v, const ComplexNumber& cn);

std::ostream& operator<<(std::ostream& stream, const ComplexNumber& cn);

#endif //FUNCTIONS_H
