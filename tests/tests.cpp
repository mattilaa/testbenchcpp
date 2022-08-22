#include <gtest/gtest.h>

#include "something.h"

TEST(TestSuite, SimpleTest)
{
    TestClass t;
    std::cout << t.getStr() << "\n";
}
