#ifndef GEOMETRY_STRAIGHT_QUADRILATERAL_PRISM_HPP
#define GEOMETRY_STRAIGHT_QUADRILATERAL_PRISM_HPP

#include "straight_triangular_prism.hpp"
#include "point.hpp"

namespace geometry {
    class StraightQuadrilateralPrism;

    std::ostream& operator<<(std::ostream& out, const geometry::StraightQuadrilateralPrism& straightQuadrilateralPrism);
    std::istream& operator>>(std::istream& in, geometry::StraightQuadrilateralPrism& straightQuadrilateralPrism);
}

class geometry::StraightQuadrilateralPrism : public geometry::StraightTrianglePrism {
public:
    StraightQuadrilateralPrism() = default;
    StraightQuadrilateralPrism(const geometry::Point& center, const geometry::Point& second, const geometry::Point& third, const geometry::Point& fourth, double h): StraightTrianglePrism(center, second, third, h), _fourth(fourth) {}
    StraightQuadrilateralPrism(const StraightQuadrilateralPrism& straightQuadrilateralPrism): StraightTrianglePrism(straightQuadrilateralPrism._center, straightQuadrilateralPrism._point, straightQuadrilateralPrism._third, straightQuadrilateralPrism._h), _fourth(straightQuadrilateralPrism._fourth) {}

    const geometry::Point& getFourth() const;
    void setFourth(const geometry::Point& fourth);
    
    double baseSquare() const;
    double baseLength() const;

    bool isParallelepiped() const;
    bool isRectangularParallelepiped() const;
    bool isQube() const;

    friend std::istream& operator>>(std::istream& in, geometry::StraightQuadrilateralPrism& straightQuadrilateralPrism);

protected:
    geometry::Point _fourth;
};

#endif /* GEOMETRY_STRAIGHT_QUADRILATERAL_PRISM_HPP */
