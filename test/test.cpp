#include <gmock/gmock.h>

#include "../src/exampleclass.h"

using namespace testing;

class AdderFix : public Test
{
public:
  Adder adder;

  //constructor
  // void SetUp() override
  // also Teardown fxn
};


TEST(ExampleClass, Adder)
{
  Adder a;
  ASSERT_EQ(a.AddOne(5), 6);
}



TEST_F(AdderFix, AddOne)
{
  ASSERT_EQ(adder.AddOne(6), 7);
}
