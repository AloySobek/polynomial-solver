#include <cstdint>
#include <iostream>
#include <optional>
#include <string>
#include <tuple>
#include <vector>

#include "polynomial.hpp"

class Solver {
  public:
  private:
};

int main(int argc, char **argv) {
    Polynomial p;

    if (!p.parse(argv[1])) {
        std::cerr << "Provided polynomial equation is invalid" << std::endl;

        return -1;
    }

    std::cout << "Polynomial solver\n";

    return 0;
}
