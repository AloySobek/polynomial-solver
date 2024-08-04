#include <iostream>
#include <optional>
#include <sstream>
#include <string>
#include <tuple>
#include <vector>

#include "term.hpp"

class Polynomial {
  public:
    Polynomial(std::string polynomial_as_string) {
        std::string left_side = polynomial_as_string.substr(0, polynomial_as_string.find("=") - 1);
        std::string right_side = polynomial_as_string.substr(polynomial_as_string.find("=") + 2,
                                                             polynomial_as_string.length());

        if (left_side.find("+") != std::string::npos) {
            std::string splitted_by_plus_left = left_side.substr(0, left_side.find("+") - 1);

            std::string splitted_by_plus_right =
                left_side.substr(left_side.find("+") + 1, left_side.length());
        } else {
        }
    }

    // std::optional<std::tuple<double, double>> solve() {
    //     if (true) {
    //         return std::nullopt;
    //     }

    //     return std::make_tuple(0.0f, 0.0f);
    // }

    ~Polynomial() {}

  private:
    int degree; // 2 is maximum for now

    std::vector<int> coefficients;
    std::vector<int> powers;
};
