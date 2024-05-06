//
// Created by kuba on 12.03.24.
//

#ifndef VECTOR2D_H
#define VECTOR2D_H
#include <ostream>

class Vector2d {
private:
    static double _e;
    double _x;
    double _y;

public:
    static void compEpsilon(double e);
    static double Epsilon();

    Vector2d& x(double x);
    [[nodiscard]] double x() const;
    Vector2d& y(double y);
    [[nodiscard]] double y() const;

    Vector2d(): _x(0.0), _y(0.0) {
    }

    Vector2d(const double x, const double y): _x(x), _y(y) {
    }
    Vector2d(const Vector2d& v): _x(v._x), _y(v._y) {}
    //Vector2d(const Vector2d& v) = default;

    [[nodiscard]] double lengthSq() const;
    [[nodiscard]] double length() const;
    [[nodiscard]] Vector2d perpendicular() const;
    [[nodiscard]] double dot(const Vector2d &v) const;
    [[nodiscard]] Vector2d add(const Vector2d &v) const;

    bool operator==(const Vector2d & v) const;
    bool operator!=(const Vector2d & v) const;

    Vector2d& operator=(const Vector2d & v);

    Vector2d operator+(const Vector2d &v) const;
    Vector2d& operator+=(const Vector2d &v);

    Vector2d operator-(const Vector2d &v) const;
    Vector2d& operator-=(const Vector2d &v);

    Vector2d operator*(const double &d) const;
    Vector2d& operator*=(const double &d);

    double& operator [](size_t index);
    double const& operator [](size_t index) const;

};
Vector2d operator*(const double &d, const Vector2d &v);
std::ostream &operator<<(std::ostream &os, const Vector2d &v);


#endif //VECTOR2D_H
