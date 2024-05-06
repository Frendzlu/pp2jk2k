//
// Created by kuba on 12.03.24.
//

#include "Vector2d.h"

#include <complex>
#include <unordered_map>

double Vector2d::_e = 0.0;
void Vector2d::compEpsilon(const double e) {
    _e = e;
}

double Vector2d::Epsilon() {
    return _e;
}

Vector2d &Vector2d::x(const double x) {
    _x = x;
    return *this;
}

double Vector2d::x() const {
    return _x;
}

Vector2d &Vector2d::y(const double y) {
    _y = y;
    return *this;
}

double Vector2d::y() const {
    return _y;
}

bool Vector2d::operator==(const Vector2d &v) const {
    return fabs(_x - v._x) < Epsilon() && fabs(_y - v._y) < Epsilon();
}
bool Vector2d::operator!=(const Vector2d &v) const {
    return !(this == &v);
}

Vector2d& Vector2d::operator=(const Vector2d &v) = default;
/* Vector2d& Vector2d::operator=(const Vector2d &v) {
    _x = v._x;
    _y = v._y;
    return *this;
}*/

double Vector2d::lengthSq() const {
    return this->dot(*this);
}

double Vector2d::length() const {
    return std::sqrt(this->lengthSq());
}

Vector2d Vector2d::perpendicular() const {
    return {_y, - _x};
}

double Vector2d::dot(const Vector2d &v) const {
    return _x*v._x + _y*v._y;
}

Vector2d Vector2d::add(const Vector2d &v) const {
    return {_x + v._x, _y + v._y};
}

Vector2d Vector2d::operator+(const Vector2d &v) const {
    return {_x + v._x, _y + v._y};
}

Vector2d &Vector2d::operator+=(const Vector2d &v) {
    *this = *this + v;
    return *this;
}

Vector2d Vector2d::operator-(const Vector2d &v) const {
    return {_x - v._x, _y - v._y};
}

Vector2d &Vector2d::operator-=(const Vector2d &v) {
    *this = *this - v;
    return *this;
}

Vector2d Vector2d::operator*(const double &d) const {
    return {_x * d, _y * d};
}

Vector2d &Vector2d::operator*=(const double &d) {
    *this = *this * d;
    return *this;
}

double & Vector2d::operator[](const size_t index) {
    return index & 0b1 ? _y : _x;
}

double const & Vector2d::operator[](const size_t index) const {
    return index & 0b1 ? _y : _x;
}

Vector2d operator*(const double &d, const Vector2d &v) {
    return v * d;
}

std::ostream &operator<<(std::ostream &os, const Vector2d &v) {
    os << "[" << v.x() << ", " << v.y() << "]";
    return os;
}
