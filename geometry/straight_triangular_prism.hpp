#ifndef GEOMETRY_STRAIGHT_TRIANGLE_PRISM
#define GEOMETRY_STRAIGHT_TRIANGLE_PRISM

#include "cylinder.hpp"
#include "utility.hpp"
#include "point.hpp"

namespace geometry {
    class StraightTrianglePrism;

    std::ostream& operator<<(std::ostream& out, const geometry::StraightTrianglePrism& straightTrianglePrism);
    std::istream& operator>>(std::istream& in, geometry::StraightTrianglePrism& straightTrianglePrism);
}

class geometry::StraightTrianglePrism : public geometry::Cylinder {
public:
    StraightTrianglePrism() = default;
    StraightTrianglePrism(const geometry::Point& center, const geometry::Point& second, const geometry::Point& third, double h): Cylinder(center, second, h), _third(third) {}
    StraightTrianglePrism(const StraightTrianglePrism& straightTrianglePrism): Cylinder(straightTrianglePrism._center, straightTrianglePrism._point, straightTrianglePrism._h), _third(straightTrianglePrism._third) {}

    constexpr geometry::StraightTrianglePrism& operator=(const geometry::StraightTrianglePrism&) = default;

    const geometry::Point& getThird() const;
    void setThird(const geometry::Point& third);
    
    double baseSquare() const;
    double baseLength() const;

    friend std::istream& operator>>(std::istream& in, geometry::StraightTrianglePrism& straightTrianglePrism);

protected:
    geometry::Point _third;
};

#endif /* GEOMETRY_STRAIGHT_TRIANGLE_PRISM */
