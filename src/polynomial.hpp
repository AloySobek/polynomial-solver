#include <algorithm>
#include <vector>

#include "term.hpp"

class Polynomial {
  public:
    Polynomial();

    Polynomial(std::string str);

    Polynomial(const Polynomial &another);

    void from_str(std::string str);

    std::string to_str();

    void simplify();

    Polynomial &operator=(const Polynomial &another);

    ~Polynomial();

  private:
    std::vector<Term> terms;

    std::string preprocess(std::string str);
    void construct(std::string str);
    Term sum(std::vector<Term> summands);
};
