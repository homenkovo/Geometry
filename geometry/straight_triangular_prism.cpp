#include "straight_triangular_prism.hpp"

const geometry::Point& geometry::StraightTrianglePrism::getThird() const {
    return this->_third;
}

void geometry::StraightTrianglePrism::setThird(const geometry::Point& third) {
    this->_third = third;
}

double geometry::StraightTrianglePrism::baseSquare() const {
    return geometry::utility::triangleSquare(this->_center, this->_point, this->_third);
}

double geometry::StraightTrianglePrism::baseLength() const {
    return (this->_center - this->_point).length() + (this->_point - this->_third).length() + (this->_third - this->_center).length();
}

std::ostream& geometry::operator<<(std::ostream& out, const geometry::StraightTrianglePrism& straightTrianglePrism) {
    return out << "StraightTriangularPrism { " << straightTrianglePrism.getCenter() << ' ' << straightTrianglePrism.getPoint() << ' ' << straightTrianglePrism.getThird() << ' ' << straightTrianglePrism.getHeight() << " }";
}

std::istream& geometry::operator>>(std::istream& in, geometry::StraightTrianglePrism& straightTrianglePrism) {
    return in >> straightTrianglePrism._center >> straightTrianglePrism._point >> straightTrianglePrism._third >> straightTrianglePrism._h;
}
