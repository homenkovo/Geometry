#include "utility.hpp"

double geometry::utility::triangleSquare(const geometry::Point& pa, const geometry::Point& pb, const geometry::Point& pc) {
    const double a = (pa - pb).length(), b = (pb - pc).length(), c = (pc - pa).length();
    const double p = (a + b + c) / 2;
    return std::sqrt(p * (p - a) * (p - b) * (p - c));
}
