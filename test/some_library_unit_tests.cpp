#include "lib.h"

#include <gtest/gtest.h>

namespace SomeLibrary
{

TEST(AddTest, AddingZeroGivesOriginalNumber)
{
	EXPECT_EQ(add(2, 0), 2);
	EXPECT_EQ(add(5, 0), 5);
	EXPECT_EQ(add(-5, 0), -5);
	EXPECT_EQ(add(0, 0), 0);
}

TEST(AddTest, WorksForPositiveNumbers)
{
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(5, 15), 20);
}

TEST(SubTest, SubWorks)
{
	EXPECT_EQ(sub(2, 1), 1);
	EXPECT_EQ(sub(5, 1), 4);
	EXPECT_EQ(sub(-5, 1), -6);
	EXPECT_EQ(sub(0, 1), -1);
	EXPECT_EQ(sub(9, 0), 9);
}

} // namespace SomeLibrary
