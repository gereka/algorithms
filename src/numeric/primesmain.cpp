#include <iostream>

#include "primes.h"

using namespace std;

int main()
{
  Primes p;
  int index;
  cout << "Index> ";
  cin >> index;
  int prime = p(index);
  cout << "Prime(" << index << ") = " << prime<< endl; 
  return 0;
}
