#ifndef ROMAN_NUMBERS_H
#define ROMAN_NUMBERS_H

#include <iostream>
#include <regex>

int validate_input(std::string user_input, int size_limit);

std::string get_roman_number(int size_limit);

int roman_to_arabic(char roman_number);

int get_arabic_number(std::string roman_number);

#endif // ROMAN_NUMBERS_H