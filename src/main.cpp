#include <cstdint>
#include <iostream>
#include <optional>
#include <string>
#include <tuple>
#include <vector>

#include "polynomial.hpp"

int main(int argc, char **argv) {
    if (argc < 3) {
        return 0;
    }

    std::string first_input = std::string(argv[1]);
    std::string second_input = std::string(argv[2]);

    Term first;
    Term second;
    Term sum;

    first.from_str(first_input);
    second.from_str(second_input);

    std::cout << first.to_str() << std::endl;
    std::cout << second.to_str() << std::endl;

    sum = first + second;

    std::cout << sum.to_str() << std::endl;

    return 0;
}
