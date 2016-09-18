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

TEST(roman_numbers_test, input)
{
	EXPECT_EQ(1, 	validate_input("I", 30));
	EXPECT_EQ(1, 	validate_input("IVIXCV", 30));
	EXPECT_EQ(1, 	validate_input("IVXLCDM", 30));
	EXPECT_EQ(-1, 	validate_input("ABCDEF", 30));
	EXPECT_EQ(-2,	validate_input("IVXIIVXICVXICVICXIVIVVIXC", 10));
}

int main(int argc, char ** argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}