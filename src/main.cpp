#include <cstdint>
#include <iostream>
#include <optional>
#include <string>
#include <tuple>
#include <vector>

#include <polynomial.hpp>

int main(int argc, char **argv) {
    if (argc < 2) {
        return 0;
    }

    std::string input(argv[1]);

    polynomial::Polynomial p(input);

    std::cout << p.to_str() << std::endl;

    p.simplify();

    std::cout << p.to_str() << std::endl;

    return 0;
}
