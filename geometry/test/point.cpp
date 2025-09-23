#include <iostream>

#include "../point.hpp"

int main() {
    bool error = false;

    geometry::Point a(1, 2), b(3, 4), c(5, 6);

    if (b.sqr() != 25) {
        std::cerr << b << " * " << b << " != " << b.sqr() << '!' << std::endl;
        error = true;
    }

    if (a + b != geometry::Point(4, 6)) {
        std::cerr << a << " + " << b << " != " << geometry::Point(4, 6) << std::endl;
        error = true;
    }

    return error;
}
