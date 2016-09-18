#include "roman_numbers.h"

int validate_input(std::string user_input, int size_limit)
{
	std::regex valid("[^IVXLCDM]+");
	// Validando input
	if(std::regex_search(user_input.begin(), user_input.end() ,valid))
		return -1;
	else if(user_input.size() > size_limit)
		return -2;
	return 1;
}

// Recebe o limite maximo
std::string get_roman_number(int size_limit)
{
}

int roman_to_arabic(char number)
{
	int num = 0;
	switch(number)
	{
		case 'I':
			num = 1;
			break;
		case 'V':
			num = 5;
			break;
		case 'X':
			num = 10;
			break;
		case 'L':
			num = 50;
			break;
		case 'C':
			num = 100;
			break;
		case 'D':
			num = 500;
			break;
		case 'M':
			num = 1000;
			break;
	}
	return num;
}

int get_arabic_number(std::string roman_number)
{
}



