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
	std::string user_input;
	int input_validated;
	do
	{
		std::cout << "Numero Romano: ";
		std::cin >> user_input;
		input_validated = validate_input(user_input, size_limit);
		if(input_validated == -1)
		{
			std::cout << "O numero possui caracteres invalidos\n";
		}
		else if(input_validated == -2)
		{
			std::cout << "Numero grane de mais (max = " << size_limit << " caracteres)\n";
		}
	}while(input_validated < 0);
	return user_input;
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
	int arabic_number = 0;
	
	for(int i = 0; i < roman_number.size(); i++)
	{
		int temp = roman_to_arabic(roman_number[i]);
		int next_number = roman_to_arabic(roman_number[i+1]);
		if(temp < next_number)
		{
			temp = next_number - temp;
			i++;
		}
		arabic_number+=temp;
	}
	return arabic_number;
}



