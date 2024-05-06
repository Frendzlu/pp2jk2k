//
// Created by kuba on 11.03.24.
//
#include <iostream>
#include "ComplexNumber.h"


ComplexNumber::ComplexNumber(): ComplexNumber(0., 0.) {}

ComplexNumber::ComplexNumber(double const re) : ComplexNumber(re, 0.){
}

ComplexNumber::ComplexNumber(double const re, double const im): _re(re), _im(im) {}

void ComplexNumber::re(const double r) {
    _re = r;
}

double ComplexNumber::re() const {
    return _re;
}

void ComplexNumber::im(const double i) {
    _im = i;
}

double ComplexNumber::im() const {
    return _im;
}

ComplexNumber ComplexNumber::add(const ComplexNumber &cn2) const {
    //const ComplexNumber z(_re + cn2._re, _im + cn2._im);
    return {_re + cn2._re, _im + cn2._im};
}
ComplexNumber ComplexNumber::add(const double &v) const {
    return {_re + v, _im};
}
ComplexNumber ComplexNumber::operator+(const ComplexNumber &cn2) const {
    return {_re + cn2._re, _im + cn2._im};
}
ComplexNumber ComplexNumber::operator+(const double &v) const {
    return {_re + v, _im};
}


ComplexNumber ComplexNumber::sub(const ComplexNumber &cn2) const {
    return {_re - cn2._re, _im - cn2._im};
}
ComplexNumber ComplexNumber::operator-(const ComplexNumber &cn2) const {
    return {_re - cn2._re, _im - cn2._im};
}
ComplexNumber ComplexNumber::operator-() const {
    return {_re * - 1, _im * - 1};
}

void ComplexNumber::print() const {
    std::cout << _re << " + " << _im << "i" << std::endl;
}
