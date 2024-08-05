#include "equation.hpp"

Equation::Equation() : left{Polynomial()}, right{Polynomial()} {}

void Equation::from_str(std::string str) {}

std::string Equation::to_str() { return ""; }

Equation::~Equation() {}
