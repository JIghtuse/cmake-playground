#include "lib.h"

#include <gtest/gtest.h>

namespace SomeLibrary
{

TEST(SlowAddTest, SlowAddingZeroGivesOriginalNumber)
{
	EXPECT_EQ(slow_add(2, 0), 2);
	EXPECT_EQ(slow_add(5, 0), 5);
	EXPECT_EQ(slow_add(-5, 0), -5);
	EXPECT_EQ(slow_add(0, 0), 0);
}

} // namespace SomeLibrary
