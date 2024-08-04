#include <sstream>
#include <string>

class Term {
  public:
    Term();

    Term(double coefficient, int exponent);

    Term(const Term &another);

    void from_str(std::string str);

    std::string to_str();

    int get_exponent();

    Term &operator=(const Term &another);

    Term &operator+(const Term &another);

    Term &operator-(const Term &another);

    Term operator-();

    ~Term() {}

  private:
    double coefficient;
    int exponent;
};
