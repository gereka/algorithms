#include <vector>

class Primes {
public:
  Primes();
  ~Primes();
  Primes(const Primes&);
  Primes& operator = (const Primes&);
  int operator ()(const int);
  
protected:
  std::vector<long> data_;
};
