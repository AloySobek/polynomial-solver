#include <string>

class Polynomial {
  public:
    Polynomial() {}

    bool parse(std::string polynomial_as_string) {
        for (char i : polynomial_as_string) {
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
