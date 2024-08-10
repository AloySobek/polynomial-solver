#include "equation.hpp"

Equation::Equation() : left{polynomial::Polynomial()}, right{polynomial::Polynomial()} {}

void Equation::from_str(std::string str) {}

std::string Equation::to_str() { return ""; }

Equation::~Equation() {}
