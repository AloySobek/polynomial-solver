#include "term.hpp"
#include <cassert>

Term::Term() : coefficient{0.0f}, exponent{0} {}

Term::Term(double coefficient, int exponent) : coefficient{coefficient}, exponent{exponent} {}

Term::Term(const Term &another) {
    coefficient = another.coefficient;
    exponent = another.exponent;
}

void Term::from_str(std::string str) {
    coefficient = std::stod(str.substr(0, str.find("*") - 1));
    exponent = std::stoi(str.substr(str.find("^") + 1, str.length()));
}

std::string Term::to_str() {
    return ((std::ostringstream()) << coefficient).str() + " * X^" +
           ((std::ostringstream()) << exponent).str();
}

int Term::get_exponent() { return exponent; }

Term &Term::operator=(const Term &another) {
    if (&another != this) {
        coefficient = another.coefficient;
        exponent = another.exponent;
    }

    return *this;
}

Term &Term::operator+(const Term &another) {
    assert(exponent == another.exponent && "Only terms with same degree can be added");

    coefficient += another.coefficient;

    return *this;
}

Term &Term::operator-(const Term &another) {
    assert(exponent == another.exponent && "Only terms with same degree can be subtracted");

    coefficient -= another.coefficient;

    return *this;
}

Term Term::operator-() { return Term(-coefficient, exponent); }
