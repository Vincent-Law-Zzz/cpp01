
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error!" << std::endl << "Wrong number of arguments !" << std::endl;
		return 1;
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.size() == 0 || s2.size() == 0)
	{
		std::cout << "Error!" << std::endl << "Wrong size of arguments s1 s2!" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::ifstream file(filename);
	if (!file.is_open()) {
		std::cout << "Error!" << std::endl << "Could not open file" << std::endl;
		return 1;
	}
	return 0;
}
