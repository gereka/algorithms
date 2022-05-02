#include "primes.h"
#include <iostream>

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



int Primes::operator ()(const int index)
{
  if (index <= data_.size())
    return data_[index-1];
  else {
    
    for (int i=data_[data_.size()-1] + 1; index > data_.size(); i++){
      bool i_is_prime = true;
      for (int p: data_){
	if (i % p == 0){
	  i_is_prime = false;
	  break;
	}
      }
      if (i_is_prime)
	data_.push_back(i);
    }

    return data_[index-1];
      
  }
  
}
