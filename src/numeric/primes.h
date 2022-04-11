#include <vector>

class Primes {
public:
  Primes();
  ~Primes();
  Primes(const Primes&);
  Primes& operator = (const Primes&);
  
protected:
  std::vector<long> data_;
};
