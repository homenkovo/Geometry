#include "straight_quadrilateral_prism.hpp"
#include "utility.hpp"

const geometry::Point& geometry::StraightQuadrilateralPrism::getFourth() const {
    return this->_fourth;
}

void geometry::StraightQuadrilateralPrism::setFourth(const geometry::Point& fourth) {
    this->_fourth = fourth;
}

double geometry::StraightQuadrilateralPrism::baseSquare() const {
    return geometry::utility::triangleSquare(this->_center, this->_point, this->_third) + geometry::utility::triangleSquare(this->_center, this->_fourth, this->_third);
}

double geometry::StraightQuadrilateralPrism::baseLength() const {
    return (this->_center - this->_point).length() + (this->_point - this->_third).length() + (this->_third - this->_fourth).length() + (this->_fourth - this->_center).length();
}

bool geometry::StraightQuadrilateralPrism::isParallelepiped() const {

}

bool geometry::StraightQuadrilateralPrism::isRectangularParallelepiped() const {

}

bool geometry::StraightQuadrilateralPrism::isQube() const {

}

std::ostream& geometry::operator<<(std::ostream& out, const geometry::StraightQuadrilateralPrism& straightQuadrilateralPrism) {
    return out << "StraightQuadrilateralPrism { " << straightQuadrilateralPrism.getCenter() << ' ' << straightQuadrilateralPrism.getPoint() << ' ' << straightQuadrilateralPrism.getThird() << ' ' << straightQuadrilateralPrism.getFourth() << ' ' << straightQuadrilateralPrism.getHeight() << " }";
}

std::istream& geometry::operator>>(std::istream& in, geometry::StraightQuadrilateralPrism& straightQuadrilateralPrism) {
    return in >> straightQuadrilateralPrism._center >> straightQuadrilateralPrism._point >> straightQuadrilateralPrism._third >> straightQuadrilateralPrism._fourth >> straightQuadrilateralPrism._h;
}
