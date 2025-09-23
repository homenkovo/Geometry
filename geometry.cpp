#include <iostream>

#include "geometry/point.hpp"

int main() {
    geometry::Point a, b;
    std::cin >> a >> b;

    std::cout << a << std::endl
              << b << std::endl;
    
    std::cout << (a - b).length() << std::endl;

    return 0;
}
