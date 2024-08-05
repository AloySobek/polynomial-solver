#include <string>

#include "polynomial.hpp"

class Equation {
  public:
    Equation();

    void from_str(std::string str);
    std::string to_str();

    ~Equation();

  private:
    Polynomial left;
    Polynomial right;
};
