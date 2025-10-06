#ifndef GEOMETRY_UTILITY_HPP
#define GEOMETRY_UTILITY_HPP

#ifndef GEOMETRY_EPSILON
#   define GEOMETRY_EPSILON 1e-7
#endif

#include "point.hpp"

#include <cmath>

namespace geometry {
    namespace utility {
        double triangleSquare(const geometry::Point& pa, const geometry::Point& pb, const geometry::Point& pc);
    }
}

#endif /* GEOMETRY_UTILITY_HPP */
