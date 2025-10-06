#include <cmath>

#include "point.hpp"

double geometry::Point::getX() const {
    return this->_x;
}

double geometry::Point::getY() const {
    return this->_y;
}

void geometry::Point::setX(double x) {
    this->_x = x;
}

void geometry::Point::setY(double y) {
    this->_y = y;
}


geometry::Point geometry::Point::operator+() const {
    return *this;
}

geometry::Point geometry::Point::operator-() const {
    return geometry::Point{-this->_x, -this->_y};
}

geometry::Point& geometry::Point::operator+=(const Point& point) {
    this->_x += point._x;
    this->_y += point._y;

    return *this;
}

geometry::Point& geometry::Point::operator-=(const Point& point) {
    this->_x -= point._x;
    this->_y -= point._y;

    return *this;
}

geometry::Point geometry::Point::operator+(const Point& point) const {
    return +*this += point;
}

geometry::Point geometry::Point::operator-(const Point& point) const {
    return +*this -= point;
}

double geometry::Point::operator*(const Point& point) const {
    return this->_x * point._x + this->_y * point._y;
}

double geometry::Point::sqr() const {
    return *this * *this;
}

double geometry::Point::length() const {
    return std::sqrt(this->sqr());
}

std::istream& geometry::operator>>(std::istream& in, geometry::Point& point) {
    return in >> point._x >> point._y;
}

std::ostream& geometry::operator<<(std::ostream& out, const geometry::Point& point) {
    return out << "Point { " << point.getX() << ' ' << point.getY() << " }";
}
