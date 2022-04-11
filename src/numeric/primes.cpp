#include "primes.h"

Primes::Primes() :
  data_{2,3,5,7,11}
{
  
}

Primes::~Primes()
{}

Primes::Primes(const Primes& other)
{
  data_=other.data_;
}

Primes& Primes::operator = (const Primes& other)
{
  data_=other.data_;
  return *this;
}



