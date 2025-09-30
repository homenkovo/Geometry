#include <iostream>
#include <numbers>

#include "../cylinder.hpp"

#define EPSILON 1e-5

int main() {
    bool error = false;

    geometry::Cylinder cylinder({0, 0}, {1, 0}, 2);

    if (std::abs(cylinder.baseSquare() - std::numbers::pi) > EPSILON) {
        std::cerr << "cylinder.baseSquare() wrong!" << std::endl;
        error = true;
    }

    if (std::abs(cylinder.baseLength() - std::numbers::pi * 2) > EPSILON) {
        std::cerr << "cylinder.baseLength() wrong!" << std::endl;
        error = true;
    }

    if (std::abs(cylinder.volume() - std::numbers::pi * 2) > EPSILON) {
        std::cerr << "cylinder.volume() wrong!" << std::endl;
    }

    if (std::abs(cylinder.sideSurfaceArea() - std::numbers::pi * 2 * 2) > EPSILON) {
        std::cerr << "cylinder.sideSurfaceArea() wrong!" << std::endl;
    }

    return error;
}
