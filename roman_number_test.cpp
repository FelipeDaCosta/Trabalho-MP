#include <gtest/gtest.h>
#include "roman_numbers.h"

TEST(roman_numbers_test, numbers)
{
	EXPECT_EQ(1, 	roman_to_arabic('I'));
	EXPECT_EQ(5, 	roman_to_arabic('V'));
	EXPECT_EQ(10, 	roman_to_arabic('X'));
	EXPECT_EQ(50, 	roman_to_arabic('L'));
	EXPECT_EQ(100, 	roman_to_arabic('C'));
	EXPECT_EQ(500, 	roman_to_arabic('D'));
	EXPECT_EQ(1000, roman_to_arabic('M'));
}

int main(int argc, char ** argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}