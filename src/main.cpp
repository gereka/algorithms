#include <iostream>

#include "exampleclass.h"

int main()
{
  Adder a;
  std::cout << "5 + 1 = " << a.AddOne(5) << std::endl;
  return 0;
}
