
#include <iostream>

int	main(void)
{
	std::string str("HI THIS IS BRAIN");
	std::string *strPtr = &str;
	std::string &strRef = str;

	std::cout << "addres of str " << &str << std::endl;
	std::cout << "addres of str by Ptr " << strPtr << std::endl;
	std::cout << "addres of str by Ref " << &strRef << std::endl;

	std::cout << "string " << str << std::endl;
	std::cout << "string by Ptr " << *strPtr << std::endl;
	std::cout << "string by Ref " << strRef << std::endl;
	return 0;
}