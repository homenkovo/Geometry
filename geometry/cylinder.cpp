#include "cylinder.hpp"

#include <numbers>

const geometry::Point& geometry::Cylinder::getCenter() const {
    return this->_center;
}

const geometry::Point& geometry::Cylinder::getPoint() const {
    return this->_point;
}

double geometry::Cylinder::getHeight() const {
    return this->_h;
}

void geometry::Cylinder::setCenter(const geometry::Point& center) {
    this->_center = center;
}

void geometry::Cylinder::setPoint(const geometry::Point& point) {
    this->_point = point;
}

void geometry::Cylinder::setHeight(double h) {
    this->_h = h;
}

double geometry::Cylinder::baseSquare() const {
    return std::numbers::pi * (this->_center - this->_point).sqr();
}

double geometry::Cylinder::baseLength() const {
    return std::numbers::pi * 2 * (this->_center - this->_point).length();
}

double geometry::Cylinder::volume() const {
    return this->baseSquare() * this->_h;
}

double geometry::Cylinder::sideSurfaceArea() const {
    return this->baseLength() * this->_h;
}

std::ostream& geometry::operator<<(std::ostream& out, const geometry::Cylinder& cylinder) {
    return out << "Cylinder { " << cylinder.getCenter() << ", " << cylinder.getPoint() << ", " << cylinder.getHeight() << " }";
}

std::istream& geometry::operator>>(std::istream& in, geometry::Cylinder& cylinder) {
    return in >> cylinder._center >> cylinder._point >> cylinder._h;
}
