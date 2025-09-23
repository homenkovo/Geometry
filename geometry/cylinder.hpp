#ifndef GEOMETRY_CYLINDER_HPP
#define GEOMETRY_CYLINDER_HPP

#include <iostream>

#include "point.hpp"

namespace geometry {
    class Cylinder;

    std::ostream& operator<<(std::ostream& out, const geometry::Cylinder& cylinder);
    std::istream& operator>>(std::istream& in, geometry::Cylinder& cylinder);
}

class geometry::Cylinder {
public:
    Cylinder() = default;
    Cylinder(const geometry::Point& center, const geometry::Point& point, double h): _center(center), _point(point), _h(h) {}
    Cylinder(const Cylinder& cylinder): _center(cylinder._center), _point(cylinder._point), _h(cylinder._h) {}

    const geometry::Point& getCenter() const;
    const geometry::Point& getPoint() const;
    double getHeight() const;

    void setCenter(const geometry::Point& center);
    void setPoint(const geometry::Point& point);
    void setHeight(double h);

    double baseSquare() const;
    double baseLength() const;
    double volume() const;
    double sideSurfaceArea() const;

    friend std::istream& operator>>(std::istream& in, geometry::Cylinder& cylinder);

protected:
    geometry::Point _center, _point;
    double _h;
};

#endif /* GEOMETRY_CYLINDER_HPP */
