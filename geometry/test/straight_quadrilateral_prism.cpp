#include "../straight_quadrilateral_prism.hpp"

#include <cmath>

#define EPSILON 1e-4

int main() {
    bool error = false;

    geometry::StraightQuadrilateralPrism prism({0, 0}, {1, 0}, {1, 1}, {0, 1}, 4);

    if (std::abs(prism.baseLength() - (2 + std::sqrt(2))) > EPSILON) {
        std::cerr << "prism.baseLength() wrong!" << std::endl;
    }

    if (std::abs(prism.baseSquare() - 0.5) > EPSILON) {
        std::cerr << "prism.baseSquare() wrong!" << std::endl;
    }

    return error;
}
