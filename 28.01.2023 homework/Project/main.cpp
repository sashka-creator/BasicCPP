#include <filesystem>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "func.h"

void add_line(std::vector<std::string>& file_lines);
void edit_line(std::vector <std::string>& file_lines);
void del_line(std::vector <std::string>& file_lines);

using namespace std;
int main()
{

	std::string file_name = "";
	system("dir /b /a:a");
	std::cout << "\nOpen a file: ";
	std::getline(std::cin, file_name);

	std::ifstream file_read(file_name);
	std::string file_str = "";
	std::vector<std::string> file_lines;
	while (std::getline(file_read, file_str))
	{
		file_lines.push_back(file_str);
	}

	int pick{ -1 };

	while (pick != 0)
	{
		system("cls");
		for (size_t i = 0; i < file_lines.size(); i++)
		{
			std::cout << i << " | " << file_lines[i] << '\n';
		}
		std::cout << '\n' << '\n';
		std::cout << "1 - Add;";
		std::cout << "2 - Edit a line;";
		std::cout << "3 - Delete a line;";
		std::cout << "0 - Exit;";
		std::cin >> pick;
		switch (pick)
		{
		case 1:
		{
			add_line(file_lines);
			break;
		}
		case 2:
		{
			edit_line(file_lines);
			break;
		}
		case 3:
		{
			del_line(file_lines);
			break;
		}
		}
	}
	std::ofstream file_write(file_name);
	for (size_t i = 0; i < file_lines.size(); i++)
	{
		file_write << file_lines[i] << '\n';
	}

	file_read.close();
	file_write.close();
}