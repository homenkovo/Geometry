#include "../straight_quadrilateral_prism.hpp"

#include <cmath>

#define EPSILON 1e-4

int main() {
    bool error = false;

    geometry::StraightQuadrilateralPrism prism({0, 0}, {1, 0}, {1, 1}, {0, 1}, 4);

    if (std::abs(prism.baseLength() - 4) > EPSILON) {
        std::cerr << "prism.baseLength() wrong!" << std::endl;
        error = true;
    }

    if (std::abs(prism.baseSquare() - 1) > EPSILON) {
        std::cerr << "prism.baseSquare() wrong!" << std::endl;
        error = true;
    }
    
    if (!geometry::StraightQuadrilateralPrism({0, 0}, {1, 1}, {0, 1}, {-1, 0}, 1).isParallelepiped()) {
        std::cerr << "prism.isParallelepiped() wrong!" << std::endl;
        error = true;
    }

    if (!prism.isRectangularParallelepiped()) {
        std::cerr << "prism.isRectangularParallelepiped() wrong!" << std::endl;
        error = true;
    }

    if (!geometry::StraightQuadrilateralPrism({0, 0}, {1, 0}, {1, 1}, {0, 1}, 1).isQube()) {
        std::cerr << "prism.isQube() wrong!" << std::endl;
        error = true;
    }

    return error;
}
