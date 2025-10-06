#ifndef GEOMETRY_POINT_HPP
#define GEOMETRY_POINT_HPP

#include <iostream>

namespace geometry {
    class Point;

    std::ostream& operator<<(std::ostream& out, const geometry::Point& point);
    std::istream& operator>>(std::istream& in, geometry::Point& point);
}

class geometry::Point {
public:
    Point() = default;
    Point(double x, double y): _x(x), _y(y) {};
    Point(const Point& point): _x(point._x), _y(point._y) {};

    bool operator==(const Point& point) const = default;

    double getX() const;
    double getY() const;

    void setX(double x);
    void setY(double y);

    geometry::Point operator+() const;
    geometry::Point operator-() const;

    geometry::Point& operator+=(const Point& point);
    geometry::Point& operator-=(const Point& point);

    geometry::Point operator+(const Point& point) const;
    geometry::Point operator-(const Point& point) const;

    double operator*(const Point& point) const;

    double sqr() const;
    double length() const;

    friend std::istream& operator>>(std::istream& in, geometry::Point& point);

private:
    double _x, _y;
};


#endif /* GEOMETRY_POINT_HPP */
