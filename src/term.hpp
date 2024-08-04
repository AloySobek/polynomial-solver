#include <iostream>
#include <sstream>
#include <string>

class Term {
  public:
    Term();

    Term(double coefficient, int exponent);

    Term(const Term &another);

    Term &operator=(const Term &another);

    Term operator+(const Term &another);

    Term operator-(const Term &another);

    Term operator-() const;

    friend std::ostream &operator<<(std::ostream &out, const Term &term);

    void from_str(std::string str);

    std::string to_str() const;

    int get_exponent() const;

    ~Term() {}

  private:
    double coefficient;
    int exponent;
};
