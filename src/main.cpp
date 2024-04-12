#include <cstdint>
#include <iostream>
#include <optional>
#include <string>
#include <tuple>
#include <vector>

class Solver {
  public:
  private:
};

class Polynomial {
  public:
    Polynomial() {}

    bool parse(int argc, char **argv) {
        std::string p(argv[1]);

        for (char i : p) {
        }

        return true;
    }

    std::optional<std::tuple<double, double>> solve() {
        if (true) {
            return std::nullopt;
        }

        return std::make_tuple(0.0f, 0.0f);
    }

    ~Polynomial() {}

  private:
    uint8_t degree; // 2 is maximum for now

    std::vector<int64_t> coefficients;
    std::vector<int64_t> powers;
};

int main(int argc, char **argv) {
    Polynomial p;

    if (!p.parse(argc, argv)) {
        std::cerr << "Provided polynomial equation is invalid" << std::endl;

        return -1;
    }

    std::cout << "Polynomial solver\n";

    return 0;
}
