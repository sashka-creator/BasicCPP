#include <iostream>
#include <string>
#include <vector>

void add_line(std::vector<std::string>& file_lines)
{
	int line_number = -1;
	std::cin.ignore();
	std::cout << "Enter a number of line: ";
	std::cin >> line_number;

	for (size_t i = 0; i < file_lines.size(); i++)
	{
		if (i == line_number)
		{
			std::string text = "";
			std::cout << "Enter a text: ";
			std::cin.ignore();
			std::getline(std::cin, text);
			file_lines.insert(file_lines.begin() + i, text);
		}
	}
}

void edit_line(std::vector<std::string>& file_lines)
{
	int line_number = -1;
	std::cin.ignore();
	std::cout << "Enter a number of line: ";
	std::cin >> line_number;

	for (size_t i = 0; i < file_lines.size(); i++)
	{
		if (i == line_number)
		{
			std::cout << file_lines[i] << '\n';
			std::string text = "";
			std::cout << "Enter a text: ";
			std::cin.ignore();
			std::getline(std::cin, text);
			file_lines[i] = text;
		}
	}
}

void del_line(std::vector<std::string>& file_lines)
{
	int line_number = -1;
	std::cin.ignore();
	std::cout << "Enter a number of line: ";
	std::cin >> line_number;

	file_lines.erase(file_lines.begin() + line_number);
}