#include <iostream>

#include "geometry/straight_quadrilateral_prism.hpp"

int main() {
    geometry::StraightQuadrilateralPrism prism({0, 0}, {1, 0}, {1, 1}, {0, 1}, 1);

    std::cout << prism.volume() << std::endl;

    return 0;
}
