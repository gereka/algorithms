#include <gmock/gmock.h>

#include "../src/string/edist.h"

#include <string>

using namespace testing;

// class LevDistFix : public Test
// {
// public:
//   std::string str1 = "Hello world!";
//   std::string str2 = "Go";
  
//   //constructor
//   // void SetUp() override
//   // also Teardown fxn
// };


// TEST(LevensteinDistance, equality)
// {
//   ASSERT_EQ(LevDist(), 0);
// }



TEST(LevDist, Equality)
{
  EXPECT_EQ(LevDist("Hello", "Hello"), 0);
}

TEST(LevDist, Inequality)
{
  EXPECT_GT(LevDist("Hello", "Goodbye"), 0);
}

TEST(LevDist, Symmetry)
{
  EXPECT_EQ(LevDist("Group Theory", "Lagrangian"),
	    LevDist("Lagrangian", "Group Theory"));
}

TEST(LevDist, Capitalization)
{
  EXPECT_EQ(LevDist("Group Theory", "group theory"), 2);
}


TEST(LevDist, NullStrings)
{
  EXPECT_EQ(LevDist("", ""), 0);
  EXPECT_EQ(LevDist("", "abc"), 3);
  EXPECT_EQ(LevDist("1234", ""), 4);  
}

TEST(LevDist, SmallStrings)
{
  EXPECT_EQ(LevDist("ab", "a"), 1);
  EXPECT_EQ(LevDist("ab", "b"), 1);
  EXPECT_EQ(LevDist("ab", "c"), 2);
  EXPECT_EQ(LevDist("abc", "ac"), 1);
}

TEST(LevDist, DeleteMiddle)
{
  EXPECT_EQ(LevDist("Hello", "Hlo"), 2);
}

TEST(LevDist, ChangeMiddle)
{
  EXPECT_EQ(LevDist("Hello", "Hallo"), 1);
}

TEST(LevDist, TotallyDifferent)
{
  EXPECT_EQ(LevDist("12345", "abc"), 5);
}
